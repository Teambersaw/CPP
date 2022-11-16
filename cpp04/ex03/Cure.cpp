/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:03:44 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/08 13:06:25 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) {
	return ;
}

Cure::Cure( Cure const &Cure) {
	*this = Cure;
	return ;
}

Cure::~Cure( void ) {
	return ;
}

Cure & Cure::operator=( Cure const & Cure) {
	if (this != &Cure)
		return (*this);
	return (*this);
}