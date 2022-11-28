/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:39:38 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/28 20:09:07 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) : _type("") {}

AMateria::AMateria( AMateria const & AMateria ) {
	*this = AMateria;
}

AMateria::AMateria( std::string const & type ) : _type(type) {}

AMateria::~AMateria( void ) {}

AMateria & AMateria::operator=( AMateria const & AMateria ) {
	if (this != &AMateria)
		this->_type = AMateria._type;
	return (*this);
}

std::string const & AMateria::getType() const {
	return (this->_type);
}

void AMateria::use( ICharacter & target) {
	std::cout << "*This item cannot be used on" << std::endl;
	if (target.getName().empty())
		std::cout << "Unamed*" << std::endl;
	else
		std::cout << target.getName() << '*' << std::endl;
	return ;
}