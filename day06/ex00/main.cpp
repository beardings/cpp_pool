//
// Created by Nikolas Ponomarov on 26.06.2018.
//

#include <iostream>
#include <iomanip>

void castToDouble(std::string str)
{
    std::cout << "double: "; // 8 = 64

    try {

        if ((std::stold(str) < std::numeric_limits<double>::min()))
            throw std::exception();
        if ((std::stold(str) > std::numeric_limits<double>::max()))
            throw std::exception();

        double d = static_cast<double>(std::stod(str));

        std::cout << d << std::endl;

    } catch (std::exception &error) {

        std::cout << "impossible" << std::endl;
    }
}


void castToFloat(std::string str)
{
    std::cout << "float: "; // 4 = 32

    try {

        if ((std::stod(str) < std::numeric_limits<float>::min()))
            throw std::exception();

        if ((std::stod(str) > std::numeric_limits<float>::max()))
            throw std::exception();

        float f = static_cast<float>(std::stof(str));

        std::cout << std::setprecision(1) << std::fixed << f << "f" << std::endl;

    } catch (std::exception &error) {

        std::cout << "impossible" << std::endl;
    }
}

void castToInt(std::string str)
{
    std::cout << "int: ";

    try {

        if ((std::stol(str) < std::numeric_limits<int>::min()))
            throw std::exception();

        if ((std::stol(str) > std::numeric_limits<int>::max()))
            throw std::exception();

        int i = static_cast<int>(std::stoi(str));

        std::cout << i << std::endl;

    } catch (std::exception &e) {

        std::cout << "impossible" << std::endl;
    }

}

void castToChar(std::string str)
{
    std::cout << "char: ";

    try {

        if (std::stoi(str) < std::numeric_limits<char>::min())
            throw std::exception();

        else if (std::stoi(str) > std::numeric_limits<char>::max())
            throw std::exception();

        char c = static_cast<char>(std::stoi(str));

        if (isprint(c))
            std::cout << "'" << c << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;

    } catch (std::exception &error) {

        std::cout << "impossible" << std::endl;
    }
}


int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cout << "Please input one argument to convert." << std::endl;
        return 0;
    }

    std::string str = argv[1];

    castToChar(str);
    castToInt(str);
    castToFloat(str);
    castToDouble(str);

    return (0);
}