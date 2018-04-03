/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <mponomar@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 21:01:00 by mponomar          #+#    #+#             */
/*   Updated: 2018/04/03 21:01:00 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (int k = 0; k != std::strlen(argv[i]); k++)
				std::cout << (char)std::toupper(argv[i][k]);
			std::cout << " ";
		}
	}
	std::cout << "\n";
	return 0;
}
