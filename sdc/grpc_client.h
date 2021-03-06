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
using grpc::Status;
using grpc::CompletionQueue;
using grpc::ClientAsyncReaderWriter;

namespace sdc
{
    class GrpcClient final : public Client<sdc::Service>
    {
        public:
        explicit GrpcClient(std::string addr);
        ~GrpcClient();

        // Sync interface
        bool Put(sdc::Service& service) override;
        std::vector<sdc::Service> Get(const std::string& service) override;

        // Opt interface
        void set_lease(int64_t lease);
        void clear_lease();

        inline
        std::shared_ptr<Channel> get_channel()
        {
            return m_channel;
        }

        private:
        std::string m_address;
        std::shared_ptr<Channel> m_channel;
        std::unique_ptr<etcdserverpb::KV::Stub> m_kv_stub;
        int64_t m_lease = 0;
    };

    inline void GrpcClient::set_lease(int64_t lease)
    {
        GrpcClient::m_lease = lease;
    }

    inline void GrpcClient::clear_lease()
    {
        GrpcClient::m_lease = 0;
    }
}

#endif