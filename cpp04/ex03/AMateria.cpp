/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:39:38 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/24 12:41:44 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) {
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

void AMateria::use( ICharacter& target) {
	std::cout << "*No use for this item*" << std::endl;
	return ;
}