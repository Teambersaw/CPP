/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:49:18 by jrossett          #+#    #+#             */
/*   Updated: 2022/10/30 21:07:19 by jrossett         ###   ########.fr       */
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
	std::cout << "This is a DEBUG message !" << std::endl;
	return ;
}

void Harl::info( void ) {
	std::cout << "[INFO]" << std::endl;
	std::cout << "This is a INFO message !" << std::endl;
	return ;
}

void Harl::warning( void ) {
	std::cout << "[WARNING]" << std::endl;
	std::cout << "This is a WARNING message !" << std::endl;
	return ;
}

void Harl::error( void ) {
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is a ERROR message !" << std::endl;
	return ;
}

void Harl::complain( std::string level ) {
	return ;
}