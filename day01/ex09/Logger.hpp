//
// Created by Mykola Ponomarov on 20.06.2018.
//

#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>
#include <fstream>
#include <ctime>

class Logger {

public:
    Logger();

    void log(std::string const &dest, std::string const &message);

private:

    typedef void (Logger::*METHODS)(std::string const &str);

    METHODS _methods[2];
    std::string _name[2];

    void logToConsole(std::string const &str);

    void logToFile(std::string const &str);

    std::string makeLogEntry(std::string const &msg);

};


#endif
