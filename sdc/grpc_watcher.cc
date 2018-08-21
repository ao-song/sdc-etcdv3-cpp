#include "grpc_watcher.h"

using namespace sdc;

GrpcWatcher::GrpcWatcher(GrpcClient* grpc_watcher_owner)
: m_watch_id(0)
{
    m_watch_stub = etcdserverpb::Watch::NewStub(
        grpc_watcher_owner->get_channel());
}

GrpcWatcher::~GrpcWatcher()
{
    // Empty;
}

bool
GrpcWatcher::start_watch(std::string service)
{
    ClientContext context;    
    std::unique_ptr<ClientAsyncReaderWriter<etcdserverpb::WatchRequest,
        etcdserverpb::WatchResponse> > stream(m_watch_stub->AsyncWatch(&context, &m_cq, (void*)CREATE));

    etcdserverpb::WatchRequest request;
    etcdserverpb::WatchResponse response;
    etcdserverpb::WatchCreateRequest create_request;

    create_request.set_key(service);
    request.mutable_create_request()->CopyFrom(create_request);

    stream->Write(request, (void*)WRITE);
    stream->Read(&response, (void*)READ);

    if (response.created())
    {
        m_watch_id = response.watch_id();
        return true;
    }
    else
    {
        return false;
    }
}