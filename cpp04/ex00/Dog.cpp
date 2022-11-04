/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:39:09 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/04 16:43:31 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal(), type("Dog"){
	std::cout << "Default Dog contructor called" << std::endl;
	return ;
}

Dog::Dog( Dog const &Dog ) : Animal(), type("Dog"){
	std::cout << "Copy Dog contructor called" << std::endl;
	*this = Dog;
	return ;
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

Dog & Dog::operator=( Dog const & Dog ) {
	if (this != &Dog)
		type = Dog.type;
	return (*this);
}