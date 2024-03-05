# -*- coding:utf-8 -*-

import subprocess
import adb_cmd
import tidevice_cmd


def version():
    adb_cmd.version()
    tidevice_cmd.version()


def devices():
    return "xxx"
