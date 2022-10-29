/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:42:30 by jrossett          #+#    #+#             */
/*   Updated: 2022/10/29 18:18:38 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde = zombieHorde(20, "ZOMBEURK");
	Zombie	*horde2 = zombieHorde(20, "EIBOMZ");
	for (int i=0; i < 20; i++)
	{
		if (i%2)
			horde[i].announce();
		else
			horde2[i].announce();
	}
	delete [] horde;
	delete [] horde2;
	return (0);
}