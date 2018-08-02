#!/bin/bash

protoc --cpp_out=./src/ ./auth.proto
protoc --cpp_out=./src/ ./kv.proto
protoc --cpp_out=./src/ ./service.proto
protoc --cpp_out=./src/ ./rpc.proto
protoc --grpc_out=./src --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` ./rpc.proto
