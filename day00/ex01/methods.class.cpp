/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   methods.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <mponomar@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 22:24:00 by mponomar          #+#    #+#             */
/*   Updated: 2018/04/04 22:24:00 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "methods.class.h"

Method::Method() {
    std::cout <<  "first method" << std::endl;
}

Method::~Method() {
    std::cout <<  "second method" << std::endl;
}