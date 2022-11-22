/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:42:30 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/22 11:43:32 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde = zombieHorde(20, "ZOMBEURK");
	for (int i = 0; i < 20; i++) {
			horde[i].announce();
	}
	delete [] horde;
	return (0);
}