/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:43:50 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/04 14:31:02 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _Hit_points(10), _Energy_points(10), _Attack_damage(0){
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string Name) :_Name(Name), _Hit_points(10), _Energy_points(10), _Attack_damage(0) {
	std::cout << "Name constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const & claptrap) : _Hit_points(10), _Energy_points(10), _Attack_damage(0){
	std::cout << "Copy constructor called" << std::endl;
	*this = claptrap;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

ClapTrap & ClapTrap::operator=( ClapTrap const &claptrap ) {
	if (this != &claptrap)
		this->_Name = claptrap.getName();
	return (*this);
}

std::string ClapTrap::getName( void ) const {
	return (this->_Name);
}

void	ClapTrap::attack(const std::string& target) {
	if (this->_Hit_points < 1) {
		std::cout << "ClapTrap " << _Name << ", has no hits point, he can't attack !!" << std::endl;
		return ;
	}
	if (this->_Energy_points < 1) {
		std::cout << "ClapTrap " << this->_Name << ", don't have enough energy points to attack " << target << std::endl;
		return ;
	}
	this->_Energy_points -= 1;
	std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_Attack_damage << " points of damage!" << std::endl;
	std::cout << "ClapTrap " << _Name << " still has " << _Energy_points << " energy points." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << _Name << " take " << amount << " damage !" << std::endl;
	if (_Hit_points < 1) {
		std::cout << "This man keeps beating ClapTrap " << _Name << " with his fist when he's already dead..." << std::endl;
		this->_Hit_points -= amount;
		std::cout << "ClapTrap " << _Name << " still has " << _Hit_points << " hit points." << std::endl;
		return ;
	}
	this->_Hit_points -= amount;
	std::cout << "ClapTrap " << _Name << " still has " << _Hit_points << " hit points." << std::endl;
	if (_Hit_points < 1)
		std::cout << "ClapTrap " << _Name << " is now out of the combat, you should RUNNNN!!" << std::endl; 
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_Hit_points < 1) {
		std::cout << "ClapTrap " << _Name << ", has no hits point, he can't be repaired !!" << std::endl;
		return ;
	}
	if (this->_Energy_points < 1) {
		std::cout << "ClapTrap " << _Name << ", does not have enough energy points to be repaired" << std::endl;
		return ;
	}
	this->_Energy_points -= 1;
	this->_Hit_points += amount;
	std::cout << "ClapTrap " << _Name << " start to repair and gains " << amount << " hit points, " << _Name << " has now " << _Hit_points << " hit points!!" << std::endl;
	std::cout << "ClapTrap " << _Name << " still has " << _Energy_points << " energy points." << std::endl;
	return ;
}