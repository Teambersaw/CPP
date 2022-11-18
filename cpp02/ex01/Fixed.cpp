/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:16:21 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/18 19:50:53 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream &	operator<<( std::ostream & o, Fixed const & i) {
	o << i.toFloat();
	return (o);
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

Fixed::Fixed( const int integer) {
	std::cout << "Int constructor called" << std::endl;
	_fixe = integer << _bits;
	return ;
}

Fixed::Fixed( const float floater) {
	std::cout << "Float constructor called" << std::endl;
	_fixe = roundf(floater * (float)(1 << _bits));
	return ;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

int Fixed::toInt( void ) const {
	return (_fixe >> _bits);
}

float Fixed::toFloat( void ) const {
	return (float)_fixe / (float)(1 << _bits);
}

int Fixed::getRawBits( void ) const {
	return this->_fixe;
}

void Fixed::setRawBits( int const raw ) {
	this->_fixe = raw;
	return ;
}

Fixed & Fixed::operator=( Fixed const & fixed ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		this->_fixe = fixed.getRawBits();
	return *this;
}

const int Fixed::_bits = 8;