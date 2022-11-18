/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:57:15 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/18 23:52:16 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {
	std::cout << "Default FragTrap constructor called" << std::endl;
	this->_Hit_points = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
	return ;
}

FragTrap::FragTrap( std::string Name ) : ClapTrap(Name) {
	std::cout << "Name FragTrap constructor called" << std::endl;
	this->_Hit_points = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
	return ;
}

FragTrap::FragTrap( FragTrap const & fragtrap) : ClapTrap() {
	std::cout << "Copy FragTrap constructor called" << std::endl;
	this->_Hit_points = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
	*this = fragtrap;
	return ;
}

FragTrap::~FragTrap( void ) {
	std::cout << "Destructor FragTrap called" << std::endl;
	return ;
}

FragTrap & FragTrap::operator=( FragTrap const &fragtrap) {
	if (this != &fragtrap)
		_Name = fragtrap.getName();
	return (*this);
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->_Name << " requests high fives" << std::endl;
}