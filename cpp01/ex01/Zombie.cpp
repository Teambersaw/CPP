/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:40:28 by jrossett          #+#    #+#             */
/*   Updated: 2022/10/29 18:51:05 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {
	return ;
}

Zombie::~Zombie( void ) {
	std::cout << Zombie::name << ": is dead" << std::endl;
	return ;
}

void Zombie::setname(std::string name) {
	Zombie::name = name;
	return ;
}

void	Zombie::announce( void ) {
	std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}