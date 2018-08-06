#ifndef __SDC_CLIENT_H__
#define __SDC_CLIENT_H__

#include <string>

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
        virtual std::string Get(Service& sv) = 0;
        virtual void Watch(Service& sv) = 0;
    };
}

#endif