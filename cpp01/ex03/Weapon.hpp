/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:11:38 by jrossett          #+#    #+#             */
/*   Updated: 2022/10/31 10:03:27 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{

	public:

		Weapon(std::string Weapon);
		~Weapon( void );

		std::string &getType();
		void	setType(std::string value);

	private:

		std::string	type;

};

#endif