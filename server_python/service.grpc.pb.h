// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: service.proto
#ifndef GRPC_service_2eproto__INCLUDED
#define GRPC_service_2eproto__INCLUDED

#include "service.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

namespace pyServer {

class MyService final {
 public:
  static constexpr char const* service_full_name() {
    return "pyServer.MyService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Add(::grpc::ClientContext* context, const ::pyServer::AddRequest& request, ::pyServer::AddResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::pyServer::AddResponse>> AsyncAdd(::grpc::ClientContext* context, const ::pyServer::AddRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::pyServer::AddResponse>>(AsyncAddRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::pyServer::AddResponse>> PrepareAsyncAdd(::grpc::ClientContext* context, const ::pyServer::AddRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::pyServer::AddResponse>>(PrepareAsyncAddRaw(context, request, cq));
    }
    virtual ::grpc::Status PrintHelloWorld(::grpc::ClientContext* context, const ::pyServer::Empty& request, ::pyServer::HelloWorldResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::pyServer::HelloWorldResponse>> AsyncPrintHelloWorld(::grpc::ClientContext* context, const ::pyServer::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::pyServer::HelloWorldResponse>>(AsyncPrintHelloWorldRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::pyServer::HelloWorldResponse>> PrepareAsyncPrintHelloWorld(::grpc::ClientContext* context, const ::pyServer::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::pyServer::HelloWorldResponse>>(PrepareAsyncPrintHelloWorldRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void Add(::grpc::ClientContext* context, const ::pyServer::AddRequest* request, ::pyServer::AddResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Add(::grpc::ClientContext* context, const ::pyServer::AddRequest* request, ::pyServer::AddResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void PrintHelloWorld(::grpc::ClientContext* context, const ::pyServer::Empty* request, ::pyServer::HelloWorldResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void PrintHelloWorld(::grpc::ClientContext* context, const ::pyServer::Empty* request, ::pyServer::HelloWorldResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::pyServer::AddResponse>* AsyncAddRaw(::grpc::ClientContext* context, const ::pyServer::AddRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::pyServer::AddResponse>* PrepareAsyncAddRaw(::grpc::ClientContext* context, const ::pyServer::AddRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::pyServer::HelloWorldResponse>* AsyncPrintHelloWorldRaw(::grpc::ClientContext* context, const ::pyServer::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::pyServer::HelloWorldResponse>* PrepareAsyncPrintHelloWorldRaw(::grpc::ClientContext* context, const ::pyServer::Empty& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status Add(::grpc::ClientContext* context, const ::pyServer::AddRequest& request, ::pyServer::AddResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::pyServer::AddResponse>> AsyncAdd(::grpc::ClientContext* context, const ::pyServer::AddRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::pyServer::AddResponse>>(AsyncAddRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::pyServer::AddResponse>> PrepareAsyncAdd(::grpc::ClientContext* context, const ::pyServer::AddRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::pyServer::AddResponse>>(PrepareAsyncAddRaw(context, request, cq));
    }
    ::grpc::Status PrintHelloWorld(::grpc::ClientContext* context, const ::pyServer::Empty& request, ::pyServer::HelloWorldResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::pyServer::HelloWorldResponse>> AsyncPrintHelloWorld(::grpc::ClientContext* context, const ::pyServer::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::pyServer::HelloWorldResponse>>(AsyncPrintHelloWorldRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::pyServer::HelloWorldResponse>> PrepareAsyncPrintHelloWorld(::grpc::ClientContext* context, const ::pyServer::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::pyServer::HelloWorldResponse>>(PrepareAsyncPrintHelloWorldRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void Add(::grpc::ClientContext* context, const ::pyServer::AddRequest* request, ::pyServer::AddResponse* response, std::function<void(::grpc::Status)>) override;
      void Add(::grpc::ClientContext* context, const ::pyServer::AddRequest* request, ::pyServer::AddResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      void PrintHelloWorld(::grpc::ClientContext* context, const ::pyServer::Empty* request, ::pyServer::HelloWorldResponse* response, std::function<void(::grpc::Status)>) override;
      void PrintHelloWorld(::grpc::ClientContext* context, const ::pyServer::Empty* request, ::pyServer::HelloWorldResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::pyServer::AddResponse>* AsyncAddRaw(::grpc::ClientContext* context, const ::pyServer::AddRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::pyServer::AddResponse>* PrepareAsyncAddRaw(::grpc::ClientContext* context, const ::pyServer::AddRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::pyServer::HelloWorldResponse>* AsyncPrintHelloWorldRaw(::grpc::ClientContext* context, const ::pyServer::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::pyServer::HelloWorldResponse>* PrepareAsyncPrintHelloWorldRaw(::grpc::ClientContext* context, const ::pyServer::Empty& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Add_;
    const ::grpc::internal::RpcMethod rpcmethod_PrintHelloWorld_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Add(::grpc::ServerContext* context, const ::pyServer::AddRequest* request, ::pyServer::AddResponse* response);
    virtual ::grpc::Status PrintHelloWorld(::grpc::ServerContext* context, const ::pyServer::Empty* request, ::pyServer::HelloWorldResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Add : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Add() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Add() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Add(::grpc::ServerContext* /*context*/, const ::pyServer::AddRequest* /*request*/, ::pyServer::AddResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAdd(::grpc::ServerContext* context, ::pyServer::AddRequest* request, ::grpc::ServerAsyncResponseWriter< ::pyServer::AddResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_PrintHelloWorld : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_PrintHelloWorld() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_PrintHelloWorld() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PrintHelloWorld(::grpc::ServerContext* /*context*/, const ::pyServer::Empty* /*request*/, ::pyServer::HelloWorldResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPrintHelloWorld(::grpc::ServerContext* context, ::pyServer::Empty* request, ::grpc::ServerAsyncResponseWriter< ::pyServer::HelloWorldResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Add<WithAsyncMethod_PrintHelloWorld<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_Add : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Add() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::pyServer::AddRequest, ::pyServer::AddResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::pyServer::AddRequest* request, ::pyServer::AddResponse* response) { return this->Add(context, request, response); }));}
    void SetMessageAllocatorFor_Add(
        ::grpc::MessageAllocator< ::pyServer::AddRequest, ::pyServer::AddResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::pyServer::AddRequest, ::pyServer::AddResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Add() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Add(::grpc::ServerContext* /*context*/, const ::pyServer::AddRequest* /*request*/, ::pyServer::AddResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Add(
      ::grpc::CallbackServerContext* /*context*/, const ::pyServer::AddRequest* /*request*/, ::pyServer::AddResponse* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_PrintHelloWorld : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_PrintHelloWorld() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::pyServer::Empty, ::pyServer::HelloWorldResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::pyServer::Empty* request, ::pyServer::HelloWorldResponse* response) { return this->PrintHelloWorld(context, request, response); }));}
    void SetMessageAllocatorFor_PrintHelloWorld(
        ::grpc::MessageAllocator< ::pyServer::Empty, ::pyServer::HelloWorldResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::pyServer::Empty, ::pyServer::HelloWorldResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_PrintHelloWorld() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PrintHelloWorld(::grpc::ServerContext* /*context*/, const ::pyServer::Empty* /*request*/, ::pyServer::HelloWorldResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* PrintHelloWorld(
      ::grpc::CallbackServerContext* /*context*/, const ::pyServer::Empty* /*request*/, ::pyServer::HelloWorldResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_Add<WithCallbackMethod_PrintHelloWorld<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Add : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Add() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Add() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Add(::grpc::ServerContext* /*context*/, const ::pyServer::AddRequest* /*request*/, ::pyServer::AddResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_PrintHelloWorld : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_PrintHelloWorld() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_PrintHelloWorld() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PrintHelloWorld(::grpc::ServerContext* /*context*/, const ::pyServer::Empty* /*request*/, ::pyServer::HelloWorldResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Add : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Add() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Add() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Add(::grpc::ServerContext* /*context*/, const ::pyServer::AddRequest* /*request*/, ::pyServer::AddResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAdd(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_PrintHelloWorld : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_PrintHelloWorld() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_PrintHelloWorld() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PrintHelloWorld(::grpc::ServerContext* /*context*/, const ::pyServer::Empty* /*request*/, ::pyServer::HelloWorldResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPrintHelloWorld(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Add : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Add() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Add(context, request, response); }));
    }
    ~WithRawCallbackMethod_Add() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Add(::grpc::ServerContext* /*context*/, const ::pyServer::AddRequest* /*request*/, ::pyServer::AddResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Add(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_PrintHelloWorld : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_PrintHelloWorld() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->PrintHelloWorld(context, request, response); }));
    }
    ~WithRawCallbackMethod_PrintHelloWorld() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PrintHelloWorld(::grpc::ServerContext* /*context*/, const ::pyServer::Empty* /*request*/, ::pyServer::HelloWorldResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* PrintHelloWorld(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Add : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Add() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::pyServer::AddRequest, ::pyServer::AddResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::pyServer::AddRequest, ::pyServer::AddResponse>* streamer) {
                       return this->StreamedAdd(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Add() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Add(::grpc::ServerContext* /*context*/, const ::pyServer::AddRequest* /*request*/, ::pyServer::AddResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedAdd(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::pyServer::AddRequest,::pyServer::AddResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_PrintHelloWorld : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_PrintHelloWorld() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::pyServer::Empty, ::pyServer::HelloWorldResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::pyServer::Empty, ::pyServer::HelloWorldResponse>* streamer) {
                       return this->StreamedPrintHelloWorld(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_PrintHelloWorld() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status PrintHelloWorld(::grpc::ServerContext* /*context*/, const ::pyServer::Empty* /*request*/, ::pyServer::HelloWorldResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedPrintHelloWorld(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::pyServer::Empty,::pyServer::HelloWorldResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Add<WithStreamedUnaryMethod_PrintHelloWorld<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Add<WithStreamedUnaryMethod_PrintHelloWorld<Service > > StreamedService;
};

}  // namespace pyServer


#endif  // GRPC_service_2eproto__INCLUDED
