//
// Created by Mykola Ponomarov on 6/18/18.
//

#include <iostream>
#include <iomanip>
#include "ContactClass.hpp"

void	ContactClass::addContact( void ) {

    std::cout << "Write first name: ";
    std::getline(std::cin, this->firstName);
    std::cout << "Write last Name: ";
    std::getline(std::cin, this->lastName);
    std::cout << "Write nickname: ";
    std::getline(std::cin, this->nickName);
    std::cout << "Write login: ";
    std::getline(std::cin, this->login);
    std::cout << "Write postal address: ";
    std::getline(std::cin, this->postalAdress);
    std::cout << "Write email address: ";
    std::getline(std::cin, this->email);
    std::cout << "Write phone number: ";
    std::getline(std::cin, this->phone);
    std::cout << "Write birthday date: ";
    std::getline(std::cin, this->birthday);
    std::cout << "Write favorite meal: ";
    std::getline(std::cin, this->favoriteMeal);
    std::cout << "Write underwear color: ";
    std::getline(std::cin, this->underwearColor);
    std::cout << "Write darkest secret: ";
    std::getline(std::cin, this->darcestSecret);

    return ;
}


void ContactClass::printContact(int index) {

    std::cout << std::setw(10) << index;
    std::cout << "|" << std::setw(10) << this->firstName;
    std::cout << "|" << std::setw(10) << this->lastName;
    std::cout << "|" << std::setw(10) << this->nickName << std::endl;
    return ;

}

void		ContactClass::printAllContactData() {

    std::cout << std::endl;
    std::cout << "First name: ";
    std::cout << this->firstName << std::endl;
    std::cout << "Last name: ";
    std::cout << this->lastName << std::endl;
    std::cout << "Nickname: ";
    std::cout << this->nickName << std::endl;
    std::cout << "Login: ";
    std::cout << this->login << std::endl;
    std::cout << "Postal address: ";
    std::cout << this->postalAdress << std::endl;
    std::cout << "Email address: ";
    std::cout << this->email << std::endl;
    std::cout << "Phone number: ";
    std::cout << this->phone << std::endl;
    std::cout << "Birthday date: ";
    std::cout << this->birthday << std::endl;
    std::cout << "Favorite meal: ";
    std::cout << this->favoriteMeal << std::endl;
    std::cout << "Underwear color: ";
    std::cout << this->underwearColor << std::endl;
    std::cout << "Darkest secret: ";
    std::cout << this->darcestSecret << std::endl;
    std::cout << std::endl;

    return ;
}