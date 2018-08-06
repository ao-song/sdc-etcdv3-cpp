#include "grpc_client.h"

using namespace sdc;

GrpcClient::GrpcClient(std::string addr)
: m_address(addr),
  m_lease(0)
{
    m_channel = grpc::CreateChannel(addr, grpc::InsecureChannelCredentials());
    m_stub = etcdserverpb::KV::NewStub(m_channel);
}

GrpcClient::~GrpcClient()
{
    // Empty
}

bool GrpcClient::Put(sdc::Service& service)
{
    etcdserverpb::PutRequest request;
    etcdserverpb::PutResponse response;

    std::string sv;
    service.SerializeToString(&sv);

    request.set_key(service.servicename());
    request.set_value(sv);
    request.set_lease(GrpcClient::m_lease);

    grpc::ClientContext context;
    grpc::Status status = 
        GrpcClient::m_stub->Put(&context, request, &response);
    
    return status.ok();
}