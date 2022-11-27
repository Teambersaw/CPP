/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:39:38 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/27 19:01:18 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) : _type("") {
	return ;
}

AMateria::AMateria( AMateria const & AMateria ) {
	*this = AMateria;
	return ;
}

AMateria::AMateria( std::string const & type ) : _type(type){
	return ;
}

AMateria::~AMateria( void ) {
	return ;
}

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