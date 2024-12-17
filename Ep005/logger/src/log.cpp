#include <iostream>
#include "log.h"

void log_data(const char *msg, LogType lt){
    switch(lt){
        case LogType::MESSAGE:
            std::cout << "MESSAGE " << msg << std::endl;
            break;
        case LogType::WARNING:
            std::cout << "WARNING " << msg << std::endl;
            break;
        case LogType::FATAL_ERROR:
            std::cout << "FATAL_ERROR " << msg << std::endl;
            break;
    }
}