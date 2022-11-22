/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:23:40 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/22 16:26:17 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap {

	public:

		DiamondTrap( void );
		DiamondTrap( std::string Name);
		DiamondTrap( DiamondTrap const &diamondtrap);
		~DiamondTrap( void );

		DiamondTrap & operator=( DiamondTrap const &diamontrap);
		using ScavTrap::attack;
		void whoAmI();

	private:

		std::string	_Name;
};

#endif