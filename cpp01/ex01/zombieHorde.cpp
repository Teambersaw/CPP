/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:43:09 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/22 11:43:43 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ) {
	if (N < 0)
		return NULL;
	Zombie	*horde = new Zombie[N];
	for (int i=0; i < N; i++) {
		horde[i].setname(name);
	}
	return (horde);
}