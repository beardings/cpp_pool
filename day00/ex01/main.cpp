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
        std::cout << "Your PhoneBook is full" << std::endl;
        return ;
    }

    std::cout << std::endl;
    contact->addContact();
    std::cout << std::endl;
    (*len)++;
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
            exit = true;

    }

    return 0;
}