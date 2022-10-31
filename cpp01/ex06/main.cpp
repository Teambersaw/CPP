/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:48:49 by jrossett          #+#    #+#             */
/*   Updated: 2022/10/31 14:27:24 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {

	Harl	harl;

	if (ac != 2)
	{
		std::cout << "HarlFilter only take one argument !" << std::endl;
		return (0);
	}
	harl.filter(av[1]);
	return (0);
}