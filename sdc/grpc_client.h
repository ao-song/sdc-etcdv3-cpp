#ifndef __SDC_GRPC_CLIENT_H__
#define __SDC_GRPC_CLIENT_H__

#include "client.h"
#include <grpc/grpc.h>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include "protos/src/rpc.grpc.pb.h"
#include "protos/src/service.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::ClientReader;
using grpc::ClientReaderWriter;
using grpc::ClientWriter;
using grpc::Status;

namespace sdc
{
    class GrpcClient final : public Client<sdc::Service>
    {
        public:
        explicit GrpcClient(std::string addr);
        ~GrpcClient();

        void Put(sdc::Service& kv) override;
        void Get(sdc::Service& kv) override;
        void Watch(sdc::Service& kv) override;

        private:
        std::string m_address;
        std::shared_ptr<Channel> m_channel;
    };
}

#endif