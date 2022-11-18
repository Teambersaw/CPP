/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:16:21 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/18 23:23:43 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixe(0) {
	return ;
}

Fixed::Fixed( Fixed const & fixed ) {
	*this = fixed;
	return ;
}

Fixed::Fixed( const int integer) {
	_fixe = integer << _bits;
	return ;
}

Fixed::Fixed( const float floater) {
	_fixe = roundf(floater * (float)(1 << _bits));
	return ;
}

Fixed::~Fixed( void ) {
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
	if (this != &fixed)
		this->_fixe = fixed.getRawBits();
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Fixed const & i) {
	o << i.toFloat();
	return (o);
}


bool Fixed::operator>( Fixed const & fixed ) const {
	if (this->toFloat() > fixed.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator<( Fixed const & fixed ) const {
	if (this->toFloat() < fixed.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator>=( Fixed const & fixed ) const {
	if (this->toFloat() >= fixed.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator<=( Fixed const & fixed ) const {
	if (this->toFloat() <= fixed.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator==( Fixed const & fixed ) const {
	if (this->toFloat() == fixed.toFloat())
		return (true);
	return (false);
}
bool Fixed::operator!=( Fixed const & fixed ) const {
	if (this->toFloat() != fixed.toFloat())
		return (true);
	return (false);
}


Fixed Fixed::operator+( Fixed const & fixed ) {
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed Fixed::operator-( Fixed const & fixed ) {
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed Fixed::operator*( Fixed const & fixed ) {
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator/( Fixed const & fixed ) {
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed & Fixed::operator++(void) {
	this->_fixe++;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp = *this;
	this->_fixe++;
	return (tmp);
}

Fixed & Fixed::operator--(void) {
	this->_fixe--;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed tmp = *this;
	this->_fixe--;
	return (tmp);
}

Fixed const	&Fixed::min(Fixed const &fixed1, Fixed const &fixed2){
	std::cout << "min const called : ";
	if (fixed1 < fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed	&Fixed::min(Fixed &fixed1, Fixed &fixed2){
	std::cout << "min called : ";
	if (fixed1 < fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed const	&Fixed::max(Fixed const &fixed1, Fixed const &fixed2){
	std::cout << "max const called : ";
	if (fixed1 > fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed	&Fixed::max(Fixed &fixed1, Fixed &fixed2){
	std::cout << "max called : ";
	if (fixed1 > fixed2)
		return (fixed1);
	return (fixed2);
}

const int Fixed::_bits = 8;