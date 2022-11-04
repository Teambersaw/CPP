/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:39:09 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/04 17:11:41 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {
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

std::string	Animal::getType( void )  const{
	return (type);
}

void	Animal::makeSound( void ) const{
	if (getType() == "Dog")
		std::cout << "BARK BARK" << std::endl;
	else if (getType() == "Cat")
		std::cout << "Meow Meow" << std::endl;
}