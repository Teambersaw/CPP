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

Cat::Cat( void ) : Animal(), type("Cat") {
	std::cout << "Default Cat contructor called" << std::endl;
	return ;
}

Cat::Cat( Cat const &Cat ) : Animal(), type("Cat") {
	std::cout << "Copy Cat contructor called" << std::endl;
	*this = Cat;
	return ;
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

Cat & Cat::operator=( Cat const & Cat ) {
	if (this != &Cat)
		type = Cat.type;
	return (*this);
}