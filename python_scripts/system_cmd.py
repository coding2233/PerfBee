# -*- coding:utf-8 -*-

import subprocess
import sys
import adb_cmd
import tidevice_cmd
import perf_bee_device_pb2 as perf_device


def version():
    adb_cmd.version()
    tidevice_cmd.version()


def devices():
    device_list = perf_device.DeviceList()
    adb_cmd.devices()


def call(method, is_ios, argv):
    call_cmd = adb_cmd
    if is_ios:
        call_cmd = tidevice_cmd
    result = eval("call_cmd." + method)(argv)
    sys.stdout.write(result)