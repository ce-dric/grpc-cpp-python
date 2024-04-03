# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
"""Client and server classes corresponding to protobuf-defined services."""
import grpc

import service_pb2 as service__pb2


class MyServiceStub(object):
    """Missing associated documentation comment in .proto file."""

    def __init__(self, channel):
        """Constructor.

        Args:
            channel: A grpc.Channel.
        """
        self.Add = channel.unary_unary(
                '/pyServer.MyService/Add',
                request_serializer=service__pb2.AddRequest.SerializeToString,
                response_deserializer=service__pb2.AddResponse.FromString,
                )
        self.PrintHelloWorld = channel.unary_unary(
                '/pyServer.MyService/PrintHelloWorld',
                request_serializer=service__pb2.Empty.SerializeToString,
                response_deserializer=service__pb2.HelloWorldResponse.FromString,
                )


class MyServiceServicer(object):
    """Missing associated documentation comment in .proto file."""

    def Add(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def PrintHelloWorld(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')


def add_MyServiceServicer_to_server(servicer, server):
    rpc_method_handlers = {
            'Add': grpc.unary_unary_rpc_method_handler(
                    servicer.Add,
                    request_deserializer=service__pb2.AddRequest.FromString,
                    response_serializer=service__pb2.AddResponse.SerializeToString,
            ),
            'PrintHelloWorld': grpc.unary_unary_rpc_method_handler(
                    servicer.PrintHelloWorld,
                    request_deserializer=service__pb2.Empty.FromString,
                    response_serializer=service__pb2.HelloWorldResponse.SerializeToString,
            ),
    }
    generic_handler = grpc.method_handlers_generic_handler(
            'pyServer.MyService', rpc_method_handlers)
    server.add_generic_rpc_handlers((generic_handler,))


 # This class is part of an EXPERIMENTAL API.
class MyService(object):
    """Missing associated documentation comment in .proto file."""

    @staticmethod
    def Add(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/pyServer.MyService/Add',
            service__pb2.AddRequest.SerializeToString,
            service__pb2.AddResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def PrintHelloWorld(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/pyServer.MyService/PrintHelloWorld',
            service__pb2.Empty.SerializeToString,
            service__pb2.HelloWorldResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)
