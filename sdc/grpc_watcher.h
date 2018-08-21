#ifndef __SDC_GRPC_WATCHER_H__
#define __SDC_GRPC_WATCHER_H__

#include "grpc_client.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using grpc::CompletionQueue;
using grpc::ClientAsyncReaderWriter;

namespace sdc
{
    class GrpcWatcher
    {
        public:
        explicit GrpcWatcher(GrpcClient* grpc_watcher_owner);
        ~GrpcWatcher();

        bool start_watch(std::string service_key);

        private:
        enum
        {
            CREATE,
            READ,
            WRITE,
            FINISH
        };
        std::unique_ptr<etcdserverpb::Watch::Stub> m_watch_stub;
        CompletionQueue m_cq;
        int64_t m_watch_id;
    };
}

#endif