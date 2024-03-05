# -*- coding:utf-8 -*-


import subprocess


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
