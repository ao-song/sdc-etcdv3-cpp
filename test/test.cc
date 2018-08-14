#include "grpc_client.h"

using namespace sdc;

#define DEFAULT_GPRC_GATEWAY_ADDRESS "127.0.0.1:2379"

int main()
{
    GrpcClient client(DEFAULT_GPRC_GATEWAY_ADDRESS);

    std::string servername("test");
    std::string address("1.1.1.1:8080");
    std::string propname("foo");
    std::string propvalue("bar");

    Service test_service;
    test_service.set_servicename(servername);
    test_service.set_address(address);
    
    Service_Property* prop = test_service.add_properties();
    prop->set_key(propname);
    prop->set_value(propvalue);

    client.Put(test_service);
    std::vector<Service> sv = client.Get("test");
    std::cout << "Service name is: " << sv[0].servicename() << std::endl;
    std::cout << "Service address is: " << sv[0].address() << std::endl;
    std::cout << "Service property name is: " << sv[0].properties(0).key() << std::endl;
    std::cout << "Service property value is: " << sv[0].properties(0).value() << std::endl;

    return 0;
}