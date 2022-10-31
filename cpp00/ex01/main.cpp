/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:17:36 by jrossett          #+#    #+#             */
/*   Updated: 2022/10/31 10:01:07 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	phonebook;
	std::string str;

	std::cout << "Welcome in your awesome PhoneBook, you can use the commmand below:\nADD: to create a new contact\nSEARCH: to see your contacts\nEXIT: to leave your PhoneBook (destroy contacts)" << std::endl;
	while (1)
	{
		std::cout << "PhoneBook: ";
		std::getline(std::cin, str);
		if (std::cin.eof()) {
			return (0);
		}
		if (str.compare("ADD") == 0)
			phonebook.add();
		else if (str.compare("SEARCH") == 0)
			phonebook.search();
		else if (str.compare("EXIT") == 0)
			return (0);
	}
	return (0);
}