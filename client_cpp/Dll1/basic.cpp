#include "pch.h"
#include "basic.h"

int Basic::Units::Add(int a, int b)
{
    return a + b;
}

void Basic::Units::PrintHelloWorld()
{
    std::cout << "Hello World!" << std::endl;
}

int Basic::Units::Add��server(int a, int b)
{
    Client client(grpc::CreateChannel("localhost:50051", 
        grpc::InsecureChannelCredentials()));

    return client.Add(a, b);
}

void Basic::Units::PrintHelloWorld��server()
{
    Client client(grpc::CreateChannel("localhost:50051", 
        grpc::InsecureChannelCredentials()));

    client.PrintHelloWorld();
}
