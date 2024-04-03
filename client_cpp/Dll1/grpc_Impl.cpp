#include "pch.h"
#include "grpc_Impl.h"

int Client::Add(int a, int b)
{
    grpc::ClientContext context;
    AddRequest request;
    AddResponse response;
    request.set_a(a);
    request.set_b(b);
    grpc::Status status = stub_->Add(&context, request, &response);
    if (status.ok()) {
        return response.result();
    }
    else {
        std::cerr << "RPC failed: " << status.error_message() << std::endl;
        return -1;
    }
}

void Client::PrintHelloWorld()
{
    grpc::ClientContext context;
    Empty request;
    HelloWorldResponse response;
    grpc::Status status = stub_->PrintHelloWorld(&context, request, &response);
    if (status.ok()) {
        std::cout << response.message() << std::endl;
    }
    else {
        std::cerr << "RPC failed: " << status.error_message() << std::endl;
    }
}
