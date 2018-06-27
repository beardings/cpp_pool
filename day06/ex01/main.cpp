//
// Created by Nikolas Ponomarov on 27.06.2018.
//

#include <iostream>

struct Data {

    std::string s1;
    std::string s2;
    int n;
};

void *serialize(void) {

    char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";

    char *data = new char[8 + 8 + 4];

    char *tmp = data;

    for (int i = 0; i < 8; i++) {

        *data = alpha[std::rand() % 62];
        data++;
    }

    *(reinterpret_cast<int *>(data)) = std::rand() % std::numeric_limits<int>::max();

    data += 4;

    for (int i = 0; i < 8; i++) {

        *data = alpha[std::rand() % 62];
        data++;
    }

    return (tmp);
}

Data *deserialize(void *raw) {

    Data *dt = new Data;

    char *ptr = reinterpret_cast<char *>(raw);
    dt->s1.assign(ptr, 8);
    ptr += 8;

    dt->n = *(reinterpret_cast<int *>(ptr));
    ptr += 4;
    dt->s2.assign(ptr, 8);

    return dt;
}

int main()
{
    Data *data;
    void *raw;

    srand(std::time(0));
    raw = serialize();
    data = deserialize(raw);

    std::cout << "s1: <" << data->s1 << ">" << std::endl;
    std::cout << "n:  <" << data->n << ">" << std::endl;
    std::cout << "s2: <" << data->s2 << ">" << std::endl;

}