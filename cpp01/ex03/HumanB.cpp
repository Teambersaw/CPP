/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:15:35 by jrossett          #+#    #+#             */
/*   Updated: 2022/10/29 22:49:37 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string Name) : _name(Name) {
	return ;
}

HumanB::~HumanB( void ) {
	return ;
}

void	HumanB::setWeapon(Weapon weapon) {
	_Weapon = &weapon;
	return ;
}

void HumanB::attack( void ) const {
	std::cout << _name << " attacks with their " << _Weapon->getType() << std::endl;
	return ;
}