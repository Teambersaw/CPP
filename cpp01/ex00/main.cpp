/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:39:39 by jrossett          #+#    #+#             */
/*   Updated: 2022/10/29 17:36:38 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie *new_zombie = newZombie("Zombie frauduleux");
	new_zombie->announce();
	randomChump("Zombinator");
	delete new_zombie;
	return (0);
}