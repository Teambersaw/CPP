/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:44:03 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/04 12:37:46 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

	public:

		ClapTrap( void );
		ClapTrap( std::string Name );
		ClapTrap( ClapTrap const & claptrap );
		~ClapTrap( void );

		ClapTrap & operator=( ClapTrap const &claptrap );

		std::string getName( void ) const;

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:

		std::string	_Name;
		int			_Hit_points;
		int			_Energy_points;
		int			_Attack_damage;
};

#endif