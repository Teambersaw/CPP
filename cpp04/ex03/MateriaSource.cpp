/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:41:31 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/24 23:35:49 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	for (int i = 0; i < 4; i++) {
		this->learn[i] = NULL;
	}
	return ;
}

MateriaSource::MateriaSource( MateriaSource const & MateriaSource ) {
	*this = MateriaSource;
	return ;
}

MateriaSource::~MateriaSource( void ) {
	for (int i = 0; i < 4; i++) {
		if (this->learn[i])
			delete learn[i];
	}
	return ;
}

MateriaSource & MateriaSource::operator=( MateriaSource const & MateriaSource ) {
	if (this != &MateriaSource)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->learn[i])
				delete learn[i];
			this->learn[i] = MateriaSource.learn[i]->clone(); 
		}
	}
	return (*this);
}

void MateriaSource::learnMateria( AMateria* m ) {
	for (int i = 0; i < 4; i++) {
		if (this->learn[i]) {
			learn[i] = m->clone();
			break;
		}
	}
	return ;
}

AMateria* MateriaSource::createMateria( std::string const & type ) {
	for (int i = 0; i < 4; i++) {
		if (this->learn[i])
		{
			if (this->learn[i]->getType() == type)
				return (learn[i]->clone());
		}
	}
	return (0);
}