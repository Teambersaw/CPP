/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:24:34 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/04 19:25:09 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	std::cout << "Default WrongAnimal contructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( WrongAnimal const &WrongAnimal ) {
	std::cout << "Copy WrongAnimal contructor called" << std::endl;
	*this = WrongAnimal;
	return ;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & WrongAnimal ) {
	if (this != &WrongAnimal)
		type = WrongAnimal.type;
	return (*this);
}

std::string	WrongAnimal::getType( void )  const{
	return (this->type);
}

void	WrongAnimal::makeSound( void ) const{
		std::cout << "No sound for WrongAnimal" << std::endl;
}