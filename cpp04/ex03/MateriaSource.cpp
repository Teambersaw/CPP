/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:41:31 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/28 00:25:29 by jrossett         ###   ########.fr       */
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
	bool answer;
	
	for (int i = 0; i < 4; i++)
	{
		answer = false;
		for (int j = i + 1; j < 4; j++)
		{
			if (this->learn[i] && (this->learn[i] == this->learn[j]))
				answer = true;
		}
		if (answer == false && this->learn[i])
			delete this->learn[i];
	}
}

MateriaSource & MateriaSource::operator=( MateriaSource const & MateriaSource ) {
	if (this != &MateriaSource)
	{
		bool answer;
		
		for (int i = 0; i < 4; i++)
		{
			answer = false;
			for (int j = i + 1; j < 4; j++)
			{
				if (this->learn[i] && (this->learn[i] == this->learn[j]))
					answer = true;
			}
			if (answer == false && this->learn[i] )
				delete this->learn[i];
			this->learn[i] = MateriaSource.learn[i]->clone();
		}
	}
	return (*this);
}

void MateriaSource::learnMateria( AMateria* m ) {
	for (int i = 0; i < 4; i++) {
		if (!this->learn[i]) {
			learn[i] = m;
			return ;
		}
	}
	for (int i = 0; i < 4; i++) {
		if (learn[i] == m)
			return ;
	}
	delete m;
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