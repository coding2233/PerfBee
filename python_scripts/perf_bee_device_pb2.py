# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: perf_bee_device.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='perf_bee_device.proto',
  package='PerfBee',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n\x15perf_bee_device.proto\x12\x07PerfBee\"G\n\x06\x44\x65vice\x12\n\n\x02id\x18\x01 \x01(\t\x12\x0c\n\x04name\x18\x02 \x01(\t\x12\x13\n\x0binformation\x18\x03 \x01(\t\x12\x0e\n\x06is_ios\x18\x04 \x01(\x08\"2\n\nDeviceList\x12$\n\x0b\x64\x65vice_list\x18\x01 \x03(\x0b\x32\x0f.PerfBee.Deviceb\x06proto3')
)




_DEVICE = _descriptor.Descriptor(
  name='Device',
  full_name='PerfBee.Device',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='PerfBee.Device.id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='name', full_name='PerfBee.Device.name', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='information', full_name='PerfBee.Device.information', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='is_ios', full_name='PerfBee.Device.is_ios', index=3,
      number=4, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=34,
  serialized_end=105,
)


_DEVICELIST = _descriptor.Descriptor(
  name='DeviceList',
  full_name='PerfBee.DeviceList',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='device_list', full_name='PerfBee.DeviceList.device_list', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=107,
  serialized_end=157,
)

_DEVICELIST.fields_by_name['device_list'].message_type = _DEVICE
DESCRIPTOR.message_types_by_name['Device'] = _DEVICE
DESCRIPTOR.message_types_by_name['DeviceList'] = _DEVICELIST
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Device = _reflection.GeneratedProtocolMessageType('Device', (_message.Message,), {
  'DESCRIPTOR' : _DEVICE,
  '__module__' : 'perf_bee_device_pb2'
  # @@protoc_insertion_point(class_scope:PerfBee.Device)
  })
_sym_db.RegisterMessage(Device)

DeviceList = _reflection.GeneratedProtocolMessageType('DeviceList', (_message.Message,), {
  'DESCRIPTOR' : _DEVICELIST,
  '__module__' : 'perf_bee_device_pb2'
  # @@protoc_insertion_point(class_scope:PerfBee.DeviceList)
  })
_sym_db.RegisterMessage(DeviceList)


# @@protoc_insertion_point(module_scope)