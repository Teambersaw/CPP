/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:15:35 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/17 11:09:43 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string Name) : _Weapon(NULL), _name(Name) {
	return ;
}

HumanB::~HumanB( void ) {
	return ;
}

void	HumanB::setWeapon(Weapon &weapon) {
	_Weapon = &weapon;
	return ;
}

void HumanB::attack( void ) const {
	if (!_Weapon)
		std::cout << _name << " attacks with their... You dont have a weapon, RUN !! " << std::endl;
	else
		std::cout << _name << " attacks with their " << _Weapon->getType() << std::endl;
	return ;
}