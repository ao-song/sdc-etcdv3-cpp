#ifndef __SDC_CLIENT_H__
#define __SDC_CLIENT_H__

#include <string>
#include <vector>

namespace sdc
{
    template <class Service>
    class Client
    {
        public:
        virtual ~Client()
        {
            // Empty
        };

        virtual bool Put(Service& sv) = 0;
        virtual std::vector<Service> Get(const std::string& sv) = 0;
    };
}

#endif