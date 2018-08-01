#ifndef __SDC_CLIENT_H__
#define __SDC_CLIENT_H__

// T

namespace sdc
{
    class Client
    {
        public:
        virtual void Put() = 0;
        virtual void Get() = 0;
        virtual void Watch() = 0;
    };
}

#endif