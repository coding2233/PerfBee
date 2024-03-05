# -*- coding:utf-8 -*-


import subprocess
import perf_bee_device_pb2



def run_cmd(cmd):
    try:
        completed_process = subprocess.run(cmd, check=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE,
                                           universal_newlines=True)
        if completed_process.check_returncode() == 0:
            return ""
        print(completed_process.stdout)
        return completed_process.stdout

    except Exception as e:
        print(e)
        return ""


def version():
    run_cmd(["adb", "--versionaaa"])


def devices():
    result = run_cmd(["adb", "devices", "-l"])
    device_list = []
    if len(result) > 0:
        lines = result.split('\n')
        for line in lines:
            if len(line) == 0:
                continue
            if line.startswith("List of devices attached"):
                continue
            device = perf_bee_device_pb2.Device()
            device_list.append(device)
    return device_list

