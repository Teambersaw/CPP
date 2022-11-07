/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:39:09 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/04 16:43:31 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal() {
	std::cout << "Default Cat contructor called" << std::endl;
	cat = new Brain();
	this->type = "Cat";
	return ;
}

Cat::Cat( Cat const &Cat ) : Animal() {
	std::cout << "Copy Cat contructor called" << std::endl;
	cat = new Brain();
	this->type = "Cat";
	*this = Cat;
	return ;
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor called" << std::endl;
	delete this->cat;
	return ;
}

Cat & Cat::operator=( Cat const & Cat ) {
	if (this != &Cat)
		type = Cat.type;
	return (*this);
}

void	Cat::makeSound( void ) const{
		std::cout << "MEOW MEOW" << std::endl;
}