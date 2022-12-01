/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 22:29:11 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/01 22:47:02 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data( void ) : c('a') {}

Data::Data( Data const & cpy ) {
	*this = cpy;
}

Data::~Data( void ) {}

Data & Data::operator=( Data const & rhs ) {
	if (this != &rhs)
		this->c = rhs.c;
	return (*this);
}

char const &Data::getChar( void ) const {
	return (this->c);
}