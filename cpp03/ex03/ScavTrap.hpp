/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:05:41 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/04 15:46:53 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : virtual public ClapTrap {

	public:

		ScavTrap( void );
		~ScavTrap( void );
		ScavTrap(std::string Name);
		ScavTrap( ScavTrap const & scavtrap );
		
		void attack(const std::string& target);
		ScavTrap & operator=(ScavTrap const &scavtrap);

		void guardGate( void );
};

#endif