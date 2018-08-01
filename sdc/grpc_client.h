#ifndef __SDC_GRPC_CLIENT_H__
#define __SDC_GRPC_CLIENT_H__

#include "client.h"
// int -> service

namespace sdc
{
    class GrpcClient final : public Client<int>
    {
        public:
        explicit GrpcClient(int addr);
        ~GrpcClient();

        void Put(int& kv) override;
        void Get(int& kv) override;
        void Watch(int& kv) override;

        private:
        int m_address;
        int m_service;
    };
}

#endif