/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <mponomar@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 21:52:00 by mponomar          #+#    #+#             */
/*   Updated: 2018/04/03 21:52:00 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "ContactClass.hpp"

void addNewContact(ContactClass *contact, int *len)
{
    if (*len == 8)
    {
        std::cout << std::endl << "Your PhoneBook is full. :)" << std::endl << std::endl;
        return ;
    }

    std::cout << std::endl;
    contact->addContact();
    std::cout << std::endl;
    (*len)++;
}


bool check_string(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

void searchContact(ContactClass *contact, int len)
{
    bool exit = false;
    std::string	index;

    if (len == 0)
    {
        std::cout << "Your PhoneBook is empty. :(" << std::endl;
        return ;
    }

    std::cout << std::endl;

    for (int i = 0; i < len; i++)
        contact[i].printContact(i);

    while (!exit)
    {
        std::cout << std::endl;
        std::cout << "Write the index: ";
        std::getline(std::cin, index);
        if (check_string(index) && std::stoi( index ) < len && std::stoi( index ) > -1) {

            contact[std::stoi( index )].printAllContactData();
            exit = true;
        }
    }

    return ;

}

int main(void)
{
    int lenContacts = 0;
    ContactClass contacts[8];
    bool exit  = false;
    std::string  command;

    while (!exit)
    {
        std::cout << "Write a command (ADD/SEARCH/EXIT): ";
        std::getline(std::cin, command);
        if (!std::strcmp("EXIT", command.c_str()))
            exit = true;
        else if (!std::strcmp("ADD", command.c_str()))
            addNewContact(contacts + lenContacts, &lenContacts);
        else if (!std::strcmp("SEARCH", command.c_str()))
            searchContact(contacts, lenContacts);

    }

    return 0;
}