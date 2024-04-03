%CD%\..\vcpkg\installed\x64-windows\tools\protobuf\protoc.exe ^
--proto_path=%CD% ^
--cpp_out=%CD% ^
--grpc_out=%CD% ^
--plugin=protoc-gen-grpc=%CD%\..\vcpkg\installed\x64-windows\tools\grpc\grpc_cpp_plugin.exe ^
%CD%\service.proto