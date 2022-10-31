/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:14:21 by jrossett          #+#    #+#             */
/*   Updated: 2022/10/31 10:03:37 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
	public:

		HumanB(std::string Name);
		~HumanB( void );

		void	attack( void ) const;
		void	setWeapon(Weapon &weapon);

	private:

		Weapon		*_Weapon;
		std::string	_name;
};

#endif