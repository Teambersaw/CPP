/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:23:22 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/04 16:15:42 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap(), ScavTrap(), FragTrap() {
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	this->_Hit_points = FragTrap::_Hit_points;
	this->_Energy_points = ScavTrap::_Energy_points;
	this->_Attack_damage = FragTrap::_Attack_damage;
	return ;
}

DiamondTrap::DiamondTrap( std::string Name ) : _Name(Name), ClapTrap(Name + "_clap_name"), ScavTrap(Name), FragTrap(Name) {
	std::cout << "Name DiamondTrap constructor called" << std::endl;
	this->_Hit_points = FragTrap::_Hit_points;
	this->_Energy_points = ScavTrap::_Energy_points;
	this->_Attack_damage = FragTrap::_Attack_damage;
	return ;
}

DiamondTrap::DiamondTrap( DiamondTrap const &diamondtrap ) : ClapTrap(), ScavTrap(), FragTrap() {
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
	this->_Hit_points = FragTrap::_Hit_points;
	this->_Energy_points = ScavTrap::_Energy_points;
	this->_Attack_damage = FragTrap::_Attack_damage;
	*this = diamondtrap;
	return ;
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "Destructor DiamondTrap called" << std::endl;
	return ;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const &diamontrap) {
	if (this != &diamontrap)
	{
		_Name = diamontrap._Name;
		ClapTrap::_Name = diamontrap._Name + "_clap_name";
	}
	return (*this);
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "DiamondTrap Name : " << _Name << std::endl;
	std::cout << "ClapTrap Name : " << ClapTrap::_Name << std::endl;
	return ;
}

void	DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}