//
// Created by Mykola Ponomarov on 6/18/18.
//

#ifndef CPP_POOL_CONTACTCLASS_H
#define CPP_POOL_CONTACTCLASS_H


class ContactClass {

public:

    std::string		firstName;
    std::string		lastName;
    std::string		nickName;
    std::string		login;
    std::string		postalAdress;
    std::string		email;
    std::string		phone;
    std::string		birthday;
    std::string		favoriteMeal;
    std::string		underwearColor;
    std::string		darcestSecret;

    void addContact(void);
    void printContact(int index);
    void printAllContactData(void);

};


#endif
