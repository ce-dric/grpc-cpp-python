# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: service.proto
# Protobuf Python Version: 4.25.1
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import builder as _builder
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\rservice.proto\x12\x08pyServer\"\"\n\nAddRequest\x12\t\n\x01\x61\x18\x01 \x01(\x05\x12\t\n\x01\x62\x18\x02 \x01(\x05\"\x1d\n\x0b\x41\x64\x64Response\x12\x0e\n\x06result\x18\x01 \x01(\x05\"\x07\n\x05\x45mpty\"%\n\x12HelloWorldResponse\x12\x0f\n\x07message\x18\x01 \x01(\t2\x85\x01\n\tMyService\x12\x34\n\x03\x41\x64\x64\x12\x14.pyServer.AddRequest\x1a\x15.pyServer.AddResponse\"\x00\x12\x42\n\x0fPrintHelloWorld\x12\x0f.pyServer.Empty\x1a\x1c.pyServer.HelloWorldResponse\"\x00\x62\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'service_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:
  DESCRIPTOR._options = None
  _globals['_ADDREQUEST']._serialized_start=27
  _globals['_ADDREQUEST']._serialized_end=61
  _globals['_ADDRESPONSE']._serialized_start=63
  _globals['_ADDRESPONSE']._serialized_end=92
  _globals['_EMPTY']._serialized_start=94
  _globals['_EMPTY']._serialized_end=101
  _globals['_HELLOWORLDRESPONSE']._serialized_start=103
  _globals['_HELLOWORLDRESPONSE']._serialized_end=140
  _globals['_MYSERVICE']._serialized_start=143
  _globals['_MYSERVICE']._serialized_end=276
# @@protoc_insertion_point(module_scope)