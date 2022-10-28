/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:53:38 by jrossett          #+#    #+#             */
/*   Updated: 2022/10/28 21:22:19 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _nb_contact(0), _max_contact(0) {
	return ;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "See you soon !!" << std::endl;
	return ;
}

void PhoneBook::add(void) {
	if (_nb_contact > 7)
		_nb_contact = 0;
	std::cout << "PhoneBook need some information to create your new contact:" << std::endl;
	_contact[_nb_contact].set_first_name();
	_contact[_nb_contact].set_last_name();
	_contact[_nb_contact].set_nickname();
	_contact[_nb_contact].set_phone_number();
	_contact[_nb_contact].set_darkest_secret();
	_nb_contact++;
	_max_contact++;
}

void PhoneBook::search(void) {
	int index = 0;
	std::string c;
	std::cout << "Contacts:" << std::endl;
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	if (_nb_contact == 0)
	{
		std::cout << "You dont have any contact, you can create one with the command ADD !" << std::endl;
		return ;
	}
	while (index < 8)
	{
		_contact[index].get_contact(index + 1);
		index++;
	}
	while (1)
	{
		std::cout << "Index of the contact: ";
		std::getline(std::cin, c);
		if (std::cin.eof()) {
			std::cout << std::endl << "See you soon !!" << std::endl;
			std::exit(0);
		}
		if (c.empty() == false)
		{
			index = atoi(c.c_str());
			if (c.length() == 1 && (index >= 1 && index <= 8))
			{
				if (index > _max_contact)
					std::cout << "This contact index doesn't exist !" << std::endl;
				else
					break;
			}
			else
				std::cout << "Please enter a valid index between 1 and 8" << std::endl;
		}
	}
	this->_contact[index - 1].aff_contact();
}