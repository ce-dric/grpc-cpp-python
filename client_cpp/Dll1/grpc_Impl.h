#pragma once

#include "service.grpc.pb.h"
#include "service.pb.h"

#include <memory>
#include <iostream>
#include <grpcpp/grpcpp.h>


using namespace pyServer;

class Client
{
public:
	Client(std::shared_ptr<grpc::Channel> channel)
		: stub_(MyService::NewStub(channel)) {}

	int Add(int a, int b);
	void PrintHelloWorld();

private:
	std::unique_ptr<MyService::Stub> stub_;
};
