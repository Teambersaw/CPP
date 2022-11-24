/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:40:56 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/24 23:27:05 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) : _Name("") {
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
	}
	return ;
}

Character::Character( std::string const & name ) : _Name(name) {
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
	}
	return ;
}

Character::Character( Character const & Character ) {
	*this = Character;
	return ;
}

Character::~Character( void ) {
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i])
				delete inventory[i];
	}
	return ;
}

Character & Character::operator=( Character const & Character ) {
	if (this != &Character)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
				delete inventory[i];
			this->inventory[i] = Character.inventory[i]->clone(); 
		}
	}
	return (*this);
}

std::string const & Character::getName() const {
	return (this->_Name);
}

void Character::equip( AMateria* m ) {
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m->clone();
			break ;
		}
	}
	return ;
}

void Character::unequip( int idx ) {
	if (idx < 0 || idx > 3)
		return ;
	this->inventory[idx] = NULL;
	return ;
}

void Character::use( int idx, ICharacter& target ) {
	if (idx < 0 || idx > 3)
		return ;
	if (this->inventory[idx])
		this->inventory[idx]->use(target);
	return ;
}