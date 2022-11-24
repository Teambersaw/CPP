/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:41:31 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/24 13:46:53 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	return ;
}

MateriaSource::MateriaSource( MateriaSource const & MateriaSource ) {
	*this = MateriaSource;
	return ;
}

MateriaSource::~MateriaSource( void ) {
	return ;
}

MateriaSource & MateriaSource::operator=( MateriaSource const & MateriaSource ) {
	if (this != &MateriaSource)
		return (*this);
	return (*this);
}

void MateriaSource::learnMateria( AMateria* m ) {
	return ;
}

AMateria* MateriaSource::createMateria( std::string const & type ) {
	return ;
}