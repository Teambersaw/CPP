/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:05:41 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/23 20:30:56 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap {

	public:

		ScavTrap( void );
		ScavTrap(std::string Name);
		ScavTrap( ScavTrap const & scavtrap );
		~ScavTrap( void );
		
		void attack(const std::string& target);
		ScavTrap & operator=(ScavTrap const &scavtrap);

		void guardGate( void );
};

#endif