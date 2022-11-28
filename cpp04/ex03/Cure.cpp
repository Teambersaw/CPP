/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:40:15 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/28 19:13:25 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure") {
	return ;
}

Cure::Cure( Cure const & Cure ) : AMateria(Cure) {
	*this = Cure;
	return ;
}

Cure::~Cure( void ) {
	return ;
}

Cure & Cure::operator=( Cure const & Cure ) {
	if (this != &Cure)
		return (*this);
	return (*this);
}

Cure* Cure::clone() const {
	Cure *clone = new Cure(*this);
	return (clone);
}

void Cure::use( ICharacter & target) {
	std::cout << "* heals ";
	if (target.getName().empty())
		std::cout << "Unamed's wounds *" << std::endl;
	else
		std::cout << target.getName() << "'s wounds *" << std::endl;
	return ;
}