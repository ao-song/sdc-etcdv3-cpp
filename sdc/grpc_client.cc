#include "grpc_client.h"

using namespace sdc;

GrpcClient::GrpcClient(std::string addr)
: m_address(addr)
{
    m_channel = grpc::CreateChannel(addr, grpc::InsecureChannelCredentials());
    m_kv_stub = etcdserverpb::KV::NewStub(m_channel);
    m_watch_stub = etcdserverpb::Watch::NewStub(m_channel);
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

    ClientContext context;
    Status status = 
        GrpcClient::m_kv_stub->Put(&context, request, &response);
    
    return status.ok();
}

std::vector<sdc::Service>& GrpcClient::Get(sdc::Service& service)
{
    std::vector<sdc::Service> vec;

    etcdserverpb::RangeRequest request;
    etcdserverpb::RangeResponse response;

    std::string key = service.servicename();

    request.set_key(key);

    ClientContext context;
    Status status =
        GrpcClient::m_kv_stub->Range(&context, request, &response);

    if (status.ok())
    {
        for (mvccpb::KeyValue kv : response.kvs())
        {
            sdc::Service sv;
            sv.ParseFromString(kv.value());
            vec.push_back(sv);
        }
    }

    return vec;
}

void GrpcClient::Watch(sdc::Service& service)
{
    // sync?
    /*
    etcdserverpb::WatchRequest request;
    etcdserverpb::WatchResponse response;
    
    ClientContext context;

    std::unique_ptr<ClientReaderWriter<etcdserverpb::WatchRequest, 
        etcdserverpb::WatchResponse> > stream(m_watch_stub->Watch(&context));

    */
}