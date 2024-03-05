# -*- coding:utf-8 -*-

import sys
import system_cmd

if __name__ == '__main__':
    print("hello world")
    argv = sys.argv
    argv_len = len(argv)
    print("sys.argv len "+str(argv_len))
    # print(devices)
    system_cmd.devices()
