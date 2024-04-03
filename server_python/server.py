from concurrent import futures
import grpc
import service_pb2
import service_pb2_grpc

class MyService(service_pb2_grpc.MyServiceServicer):
    def Add(self, request, context):
        print('Add:', request.a, request.b)
        return service_pb2.AddResponse(result=request.a + request.b)

    def PrintHelloWorld(self, request, context):
        print('Hello World!')
        return service_pb2.HelloWorldResponse(message="Hello World!")

def serve():
    server = grpc.server(futures.ThreadPoolExecutor(max_workers=10))
    service_pb2_grpc.add_MyServiceServicer_to_server(MyService(), server)
    server.add_insecure_port('[::]:50051')
    server.start()
    print('Server started!')
    server.wait_for_termination()

if __name__ == '__main__':
    serve()
