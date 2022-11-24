/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:40:56 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/24 15:46:34 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) {
	return ;
}

Character::Character( std::string const & name ) : _Name(name) {
	return ;
}

Character::Character( Character const & Character ) {
	*this = Character;
	return ;
}

Character::~Character( void ) {
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i]->getType().empty() == false)
				delete inventory[i];
	}
	return ;
}

Character & Character::operator=( Character const & Character ) {
	if (this != &Character)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i]->getType().empty() == false)
				delete inventory[i];
			this->inventory[i] = Character.inventory[i]; 
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
		if (this->inventory[i]->getType().empty())
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
	if (this->inventory[idx]->getType().empty())
		return ;
	return ;
}

void Character::use( int idx, Character& target ) {
	if (idx < 0 || idx > 3)
		return ;
	if (this->inventory[idx]->getType().empty())
		return ;
	this->inventory[idx]->use(target);
	return ;
}