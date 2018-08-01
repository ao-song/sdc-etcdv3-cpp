#ifndef __SDC_CLIENT_H__
#define __SDC_CLIENT_H__

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

        virtual void Put(Service& sv) = 0;
        virtual void Get(Service& sv) = 0;
        virtual void Watch(Service& sv) = 0;
    };
}

#endif