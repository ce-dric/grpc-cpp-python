# C++, How to communicate with Python?
Communicate with the cpp program while the Python server is running.

using `gRPC` protocols


### Installation
1. CPP
    ```shell
    > git clone https://github.com/Microsoft/vcpkg.git vcpkg
    > cd .\vcpkg
    > powershell.exe .\bootstrap-vcpkg.bat

    # c++ 17
    # git checkout be1e1b72e7c5a9a07268c99c4a50d2ace0e2b469 -- ports/abseil
    # cd .\triplets
    # in x64-windows-static.cmake, x64-windows.cmake
    # append belows
    # set(VCPKG_CXX_FLAGS "/std:c++17")
    # set(VCPKG_C_FLAGS "")
    # cd ..

    > .\vcpkg install abseil:x64-windows
    > .\vcpkg install grpc:x64-windows
    > .\vcpkg integrate install
    ```

2. Python
    ```shell
    > python -m venv my_env
    > my_env\Scripts\activate
    (my_env) > pip install grpcio
    (my_env) > pip install grpcio-tools
    ```

### Compile, Build

1. Client

    ```shell
    > %CD%\..\vcpkg\installed\x64-windows\tools\protobuf\protoc.exe --proto_path=%CD% --cpp_out=%CD% --grpc_out=%CD% --plugin=protoc-gen-grpc=%CD%\..\vcpkg\installed\x64-windows\tools\grpc\grpc_cpp_plugin.exe %CD%\service.proto
    ```

2. Server

    ```shell
    (my_env) > python -m grpc_tools.protoc -I. --python_out=. --grpc_python_out=. service.proto
    (my_env) > python server.py
    ```
