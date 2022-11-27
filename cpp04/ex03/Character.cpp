/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:40:56 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/27 20:59:27 by jrossett         ###   ########.fr       */
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
	bool answer;
	
	for (int i = 0; i < 4; i++)
	{
		answer = false;
		for (int j = i + 1; j < 4; j++)
		{
			if (this->inventory[i] && (this->inventory[i] == this->inventory[j]))
				answer = true;
		}
		if (answer == false && this->inventory[i])
				delete this->inventory[i];
	}
}

Character & Character::operator=( Character const & Character ) {
	if (this != &Character)
	{
		bool answer;
		
		for (int i = 0; i < 4; i++)
		{
			answer = false;
			for (int j = i + 1; j < 4; j++)
			{
				if (this->inventory[i] && (this->inventory[i] == this->inventory[j]))
					answer = true;
			}
			if (answer == false && this->inventory[i] )
				delete this->inventory[i];
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
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			return ;
		}
	}
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i] == m)
			return ;
	}
	delete m;
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