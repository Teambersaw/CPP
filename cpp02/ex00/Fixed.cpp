/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:16:21 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/01 15:18:45 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::getRawBits( void ) const {
	return this->fixe;
}

void Fixed::setRawBits( int const raw ) {
	this->fixe = raw;
	return ;
}

Fixed::Fixed( void ) : fixe(0) {
	return ;
}

Fixed::Fixed( Fixed const & fixed ) {
	*this = fixed;
	return ;
}

Fixed::~Fixed( void ) {
	return ;
}

Fixed & Fixed::operator=( Fixed  & const fixed ) {
	if (this != &fixed)
		this->fixe = fixed.getRawBits();
	return *this;
}