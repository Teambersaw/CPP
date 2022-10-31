/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:41:18 by jrossett          #+#    #+#             */
/*   Updated: 2022/10/31 10:02:06 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

	public:

		Zombie(std::string names);
		~Zombie(void);

		void announce( void );
		
	private:

		std::string name;
	
};

void randomChump( std::string name );
Zombie* newZombie(std::string name);

#endif