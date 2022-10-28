/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:16:56 by jrossett          #+#    #+#             */
/*   Updated: 2022/10/28 21:22:30 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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