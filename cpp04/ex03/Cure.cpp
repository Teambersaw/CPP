/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:40:15 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/24 13:07:13 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) {
	return ;
}

Cure::Cure( Cure const & Cure ) {
	*this = Cure;
	return ;
}

Cure::~Cure( void ) {
	return ;
}

Cure & Cure::operator=( Cure const & Cure ) {
	return ;
}

Cure* Cure::clone() const {
	Cure *clone;
	return (clone);
}

void Cure::use( ICharacter& target) {
	std::cout << "* heals" << target.getName() << "'s wounds *" << std::endl;
	return ;
}