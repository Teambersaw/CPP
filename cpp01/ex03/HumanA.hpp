/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:14:21 by jrossett          #+#    #+#             */
/*   Updated: 2022/10/30 11:55:48 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	public:

		HumanA(std::string Name, Weapon &weapon);
		~HumanA( void );
		
		void	attack( void ) const;

	private:

		std::string	_name;
		Weapon	&_Weapon;

};

#endif