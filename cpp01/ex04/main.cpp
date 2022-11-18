/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:33:05 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/18 14:03:38 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int ac, char **av)
{
	if (ac != 4) {
		std::cout << "The program need 3 arguments" << std::endl;
		return (0);
	}
	sed(av[1], av[2], av[3]);
	return (0);
}
