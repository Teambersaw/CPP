/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:16:03 by jrossett          #+#    #+#             */
/*   Updated: 2022/10/30 11:53:36 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string Name, Weapon &weapon) : _name(Name), _Weapon(weapon) {
	return ;
}

HumanA::~HumanA( void ) {
	return ;
}

void HumanA::attack( void ) const {
	std::cout << _name << " attacks with their " << _Weapon.getType() << std::endl;
	return ;
}