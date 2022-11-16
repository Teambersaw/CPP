/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:37:08 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/08 12:56:40 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) {
	return ;
}

AMateria::AMateria( AMateria const &amateria) {
	*this = amateria;
	return ;
}

AMateria::AMateria(std::string const & type) : _type(type) {
	return ;
}

AMateria::~AMateria( void ) {
	return ;
}

AMateria & AMateria::operator=( AMateria const & amateria) {
	if (this != &amateria)
		this->_type = amateria._type;
	return (*this);
}

std::string const & AMateria::getType() const {
	return (this->_type);
}

void AMateria::use(ICharacter& target) {
	return ;
}