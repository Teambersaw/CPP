/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:40:15 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/24 15:37:24 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria() {
	return ;
}

Cure::Cure( Cure const & Cure ) : AMateria() {
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
	Cure *clone = new Cure;
	return (clone);
}

void Cure::use( Character & target) {
	std::cout << "* heals";
	if (target.getName().empty())
		std::cout << "Unamed's wounds *" << std::endl;
	else
		std::cout << target.getName() << "'s wounds *" << std::endl;
	return ;
}