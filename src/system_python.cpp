//
// Created by EDY on 2024/3/4.
//

#include "system_python.h"

static std::string RunSystemTask(const char* cmd)
{
    static char result[10240] = {0};
    static char buf[1024] = {0};
    FILE *fp = NULL;
    if( (fp = popen(cmd, "r")) == NULL ) {
        printf("popen error!\n");
        return NULL;
    }

    while (fgets(buf, sizeof(buf), fp)) {
        strcat(result, buf);
    }

    pclose(fp);
    printf("result: %s\n", result);

    std::string result_str = result;
    return  result_str;
}

std::string SystemPython::Run(const char* cmd)
{
//    std::thread t(&SystemPython::RunSystemTask);
//    t.detach();
    return RunSystemTask(cmd);
}
