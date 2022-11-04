/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:07:21 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/04 14:32:32 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
	std::cout << "Default constructor Scavtrap called" << std::endl;
	this->_Hit_points = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
	return ;
}

ScavTrap::ScavTrap( ScavTrap const & ScavTrap) :  ClapTrap() {
	std::cout << "Copy constructor Scavtrap called" << std::endl;
	this->_Hit_points = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
	*this = ScavTrap;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name) {
	std::cout << "Name ScavTrap constructor called" << std::endl;
	this->_Hit_points = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
	return ;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "Destructor Scavtrap called" << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=( ScavTrap const &ScavTrap ) {
	if (this != &ScavTrap)
		_Name = ScavTrap.getName();
	return (*this);
}

void	ScavTrap::attack(const std::string& target) {
	if (this->_Hit_points < 1) {
		std::cout << "Scavtrap " << _Name << ", has no hits point, he can't attack !!" << std::endl;
		return ;
	}
	if (this->_Energy_points < 1) {
		std::cout << "Scavtrap " << this->_Name << ", don't have enough energy points to attack " << target << std::endl;
		return ;
	}
	this->_Energy_points -= 1;
	std::cout << "Scavtrap " << this->_Name << " attacks " << target << ", causing " << this->_Attack_damage << " points of damage!" << std::endl;
	std::cout << "Scavtrap " << _Name << " still has " << _Energy_points << " energy points." << std::endl;
}

void	ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->_Name << " is in Gate keeper Mode !!!" << std::endl;
}