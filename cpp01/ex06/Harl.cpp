/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:49:18 by jrossett          #+#    #+#             */
/*   Updated: 2022/10/31 15:10:54 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {
	return ;
}

Harl::~Harl( void ) {
	return ;
}

void Harl::debug( void ) {
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "This is an DEBUG message !" << std::endl;
	return ;
}

void Harl::info( void ) {
	std::cout << "[INFO]" << std::endl;
	std::cout << "This is an INFO message !" << std::endl;
	return ;
}

void Harl::warning( void ) {
	std::cout << "[WARNING]" << std::endl;
	std::cout << "This is an WARNING message !" << std::endl;
	return ;
}

void Harl::error( void ) {
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is an ERROR message !" << std::endl;
	return ;
}

void Harl::filter(std::string level) {
	int i = 0;
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4 && str[i] != level)
		i++;
	switch ( i )
	{
		case 0:
			Harl::complain(0);
			break;
		case 1:
			Harl::complain(1);
			break;
		case 2:
			Harl::complain(2);
			break;
		case 3:
			Harl::complain(3);
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl; 

	}
}

void Harl::complain( int i) {
	void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4)
	{
		(this->*f[i])();
		i++;
	}
	return ;
}