/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:26:44 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/04 19:26:44 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal(), type("WrongCat") {
	std::cout << "Default WrongCat contructor called" << std::endl;
	return ;
}

WrongCat::WrongCat( WrongCat const &WrongCat ) : WrongAnimal(), type("WrongCat") {
	std::cout << "Copy WrongCat contructor called" << std::endl;
	*this = WrongCat;
	return ;
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

WrongCat & WrongCat::operator=( WrongCat const & WrongCat ) {
	if (this != &WrongCat)
		type = WrongCat.type;
	return (*this);
}

void	WrongCat::makeSound( void ) const{
		std::cout << "BEHHHHH BEHHHHHH" << std::endl;
}