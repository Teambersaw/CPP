/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:40:56 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/24 13:35:32 by jrossett         ###   ########.fr       */
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
	return ;
}

Character & Character::operator=( Character const & Character ) {
	if (this != &Character)
		return (*this);
	return (*this);
}

std::string const & Character::getName() const {
	return (this->_Name);
}

void Character::equip( AMateria* m ) {
	return ;
}

void Character::unequip( int idx ) {
	return ;
}

void Character::use( int idx, Character& target ) {
	return ;
}