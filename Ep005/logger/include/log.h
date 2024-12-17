#ifndef LOG_H
#define LOG_H


#include <iostream>
//#include <string>

enum class LogType {
    MESSAGE,
    WARNING,
    FATAL_ERROR
};

void log_data(const char *msg, LogType lt);

#endif