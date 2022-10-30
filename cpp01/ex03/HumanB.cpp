/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:15:35 by jrossett          #+#    #+#             */
/*   Updated: 2022/10/30 11:53:26 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string Name) : _name(Name), _Weapon(NULL) {
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