/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:14:00 by jrossett          #+#    #+#             */
/*   Updated: 2022/10/30 11:55:57 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(std::string weapon_name) : type(weapon_name) {
	return ;
}

Weapon::~Weapon( void ) {
	return ;
}

void	Weapon::setType(std::string value) {
	type = value;
	return ;
}

std::string	&Weapon::getType() {
	return (type);
}