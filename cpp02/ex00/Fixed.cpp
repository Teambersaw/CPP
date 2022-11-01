/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:16:21 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/01 18:12:59 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixe;
}

void Fixed::setRawBits( int const raw ) {
	this->_fixe = raw;
	return ;
}

Fixed::Fixed( void ) : _fixe(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & fixed ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	return ;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed & Fixed::operator=( Fixed const & fixed ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		this->_fixe = fixed.getRawBits();
	return *this;
}