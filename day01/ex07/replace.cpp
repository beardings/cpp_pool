//
// Created by Nikolas Ponomarov on 20.06.2018.
//

#include <iostream>
#include <fstream>

void replaceStrings(std::string& buff, const std::string& s1, const std::string& s2)
{
    if (s1.empty() || s2.empty())
    {
        std::cout << "String is empty." << std::endl;
        return ;
    }

    size_t start = 0;
    while((start = buff.find(s1, start)) != std::string::npos) {
        buff.replace(start, s1.length(), s2);
        start += s2.length();
    }
}

int main(int argc, char **argv)
{
    std::string buff;

    if (argc != 4)
    {
        std::cout << "Too many / few arguments." << std::endl;
        return 0;
    }

    std::ifstream incomingFile(argv[1]);

    if (!incomingFile.is_open())
    {
        std::cout << "Invalid file." << std::endl;
        return 0;
    }


    std::string path = argv[1];
    std::ofstream outgoingFile(path + ".replace");

    while (std::getline(incomingFile, buff))
    {
        replaceStrings(buff, argv[2], argv[3]);
        outgoingFile << buff << std::endl;
    }
    incomingFile.close();
    outgoingFile.close();

    return 0;
}