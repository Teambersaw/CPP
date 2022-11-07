/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:39:09 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/08 00:08:21 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : type("none") {
	std::cout << "Default Animal contructor called" << std::endl;
	return ;
}

Animal::Animal( Animal const &animal ) {
	std::cout << "Copy Animal contructor called" << std::endl;
	*this = animal;
	return ;
}

Animal::~Animal( void ) {
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

Animal & Animal::operator=( Animal const & animal ) {
	if (this != &animal)
		type = animal.type;
	return (*this);
}

std::string	Animal::getType( void ) const{
	return (this->type);
}

void	Animal::makeSound( void ) const{
		std::cout << "No sound for Animal" << std::endl;
}