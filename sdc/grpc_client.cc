#include "grpc_client.h"

using namespace sdc;

GrpcClient::GrpcClient(std::string addr)
: m_address(addr)
{
    m_channel = grpc::CreateChannel(addr, grpc::InsecureChannelCredentials());    
}

GrpcClient::~GrpcClient()
{
    // Empty
}

void GrpcClient::Put(sdc::Service& kv)
{
    
}