/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:53:38 by jrossett          #+#    #+#             */
/*   Updated: 2022/10/28 21:00:05 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void) : _nb_contact(0), _max_contact(0) {
	return ;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "See you soon !!" << std::endl;
	return ;
}

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

void Contact::set_first_name() {
	while (1)
	{
		std::cout << "First name: ";
		std::getline(std::cin, _first_name);
		if (std::cin.eof()) {
			std::cout << std::endl << "See you soon !!" << std::endl;
			std::exit(0);
		}
		if (_first_name.empty() == false)
			return ;
	}
}

void Contact::set_last_name() {
	while (1)
	{
		std::cout << "Last name: ";
		std::getline(std::cin, _last_name);
		if (std::cin.eof()) {
			std::cout << std::endl << "See you soon !!" << std::endl;
			std::exit(0);
		}
		if (_last_name.empty() == false)
			return ;
	}
}

void Contact::set_nickname() {
	while (1)
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, _nickname);
		if (std::cin.eof()) {
			std::cout << std::endl << "See you soon !!" << std::endl;
			std::exit(0);
		}
		if (_nickname.empty() == false)
			return ;
	}
}

void Contact::set_phone_number() {
	while (1)
	{
		std::cout << "Phone number: ";
		std::getline(std::cin, _phone_number);
		if (std::cin.eof()) {
			std::cout << std::endl << "See you soon !!" << std::endl;
			std::exit(0);
		}
		if (_phone_number.empty() == false)
			return ;
	}
}

void Contact::set_darkest_secret() {
	while (1)
	{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, _darkest_secret);
		if (std::cin.eof()) {
			std::cout << std::endl << "See you soon !!" << std::endl;
			std::exit(0);
		}
		if (_darkest_secret.empty() == false)
			return ;
	}
}

void Contact::get_contact(int index) {

	std::string str;

	if (_first_name.empty()) {
		return ;
	}
	std::cout << "|" << std::setw(10) << index;
	str = _first_name;
	if (str.length() > 10)
	{
		str.replace(9, str.length() - 9, ".");
	}
	std::cout << "|" << std::setw(10) << str;
	str = _last_name;
	if (str.length() > 10)
	{
		str.replace(9, str.length() - 9, ".");
	}
	std::cout << "|" << std::setw(10) << str;
	str = _nickname;
	if (str.length() > 10)
	{
		str.replace(9, str.length() - 9, ".");
	}
	std::cout << "|" << std::setw(10) << str;
	std::cout << "|" << std::endl;
	return ;
}

void Contact::aff_contact(void) {
	std::cout << "First name: " << _first_name << std::endl;
	std::cout << "Last name: " << _last_name << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone number: " << _phone_number << std::endl;
	std::cout << "Darkest secret: " << _darkest_secret << std::endl;
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