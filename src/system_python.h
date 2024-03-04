//
// Created by EDY on 2024/3/4.
//

#ifndef PERFBEE_SYSTEM_PYTHON_H
#define PERFBEE_SYSTEM_PYTHON_H

#include <stdio.h>
#include <thread>
#include <stdlib.h>
#include <string.h>
#include <queue>

#if _WIN32
#define popen _popen
#define pclose _pclose
#endif

class SystemPython
{
public:

    static std::string Run(const char* cmd);

private:

};


#endif //PERFBEE_SYSTEM_PYTHON_H
