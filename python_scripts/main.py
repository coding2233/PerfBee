# -*- coding:utf-8 -*-

import subprocess
import sys
import os
import system_cmd

# value = subprocess.run(["adb", "devices"])

if __name__ == '__main__':
    print("hello world")
    argv = sys.argv
    print("sys.argv len "+str(len(argv)))
    system_cmd.version()
    # print(devices)
