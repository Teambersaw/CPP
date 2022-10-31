/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:41:18 by jrossett          #+#    #+#             */
/*   Updated: 2022/10/31 10:02:20 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

	public:

		Zombie( void );
		~Zombie( void );

		void setname(std::string name);
		void announce( void );
		
	private:

		std::string name;
	
};

Zombie* zombieHorde( int N, std::string name );

#endif