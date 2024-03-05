# -*- coding:utf-8 -*-

import subprocess


def version():
    completed_process = subprocess.run(["tidevice", "--version"],check=True,stdout=subprocess.PIPE,stderr=subprocess.PIPE, universal_newlines=True)
    print(completed_process.stdout)


def devices():
    return "iso devices"
