//
// Created by Mykola Ponomarov on 20.06.2018.
//

#include "Logger.hpp"

std::string Logger::makeLogEntry(std::string const & msg) {

    std::string     result;
    char	        buff[19];
    std::time_t     now = time(0);

    std::tm *ltm = localtime(&now);
    std::strftime(buff,18,"[%Y%m%d-%H%M%S] ",ltm);

    buff[18] = '\0';
    result = buff;
    result = "[" + result + msg + "]";
    return (result);
}

void        Logger::logToConsole(std::string const & str) {
    std::cout << makeLogEntry(str) << std::endl;
}

void        Logger::logToFile(std::string const & str) {
    std::cout << makeLogEntry(str) << std::endl;

}

Logger::Logger() {

    _name[0] = "logToConsole";
    _name[1] = "logToFile";
    _methods[0] = &Logger::logToConsole;
    _methods[1] = &Logger::logToFile;

}

void Logger::log(std::string const & dest, std::string const & message) {

    for (int i = 0; i < 2; i++) {

        if (_name[i].compare(dest)) {

            ((this)->*(_methods[i]))(message);
        }
    }

}