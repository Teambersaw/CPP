/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:43:18 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/18 23:49:19 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap	trap;
	DiamondTrap	Trap_name("Garou");
	DiamondTrap	copy(Trap_name);

	trap = Trap_name;
	std::cout << std::endl;
	trap.whoAmI();
	trap.attack("Saitama");
	trap.attack("Saitama");
	trap.takeDamage(5);
	trap.beRepaired(450);
	trap.attack("Saitama");
	trap.takeDamage(454);
	trap.beRepaired(99999999);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.attack("Saitama");
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.attack("Saitama");
	trap.attack("Saitama");
	trap.highFivesGuys();
	std::cout << "Saitama noticed you." << std::endl;
	trap.takeDamage(111111111);
	trap.attack("Saitama");
	trap.takeDamage(11111111);
	trap.beRepaired(99999999);
	trap.takeDamage(11111111);
	trap.beRepaired(99999999);
	trap.takeDamage(11111111);
	trap.guardGate();


	std::cout << std::endl << std::endl << std::endl;
	copy.whoAmI();
	copy.attack("Saitama");
	copy.attack("Saitama");
	copy.takeDamage(5);
	copy.beRepaired(450);
	copy.attack("Saitama");
	copy.takeDamage(454);
	copy.beRepaired(99999999);
	copy.beRepaired(1);
	copy.beRepaired(1);
	copy.attack("Saitama");
	copy.beRepaired(1);
	copy.beRepaired(1);
	copy.attack("Saitama");
	copy.attack("Saitama");
	copy.highFivesGuys();
	std::cout << "Saitama noticed you." << std::endl;
	copy.takeDamage(111111111);
	copy.attack("Saitama");
	copy.takeDamage(11111111);
	copy.beRepaired(99999999);
	copy.takeDamage(11111111);
	copy.beRepaired(99999999);
	copy.takeDamage(11111111);
	copy.guardGate();
	return (0);
}