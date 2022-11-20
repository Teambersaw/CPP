/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:15:58 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/20 19:31:23 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <sstream>
#include <cstdlib>

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( int ac, char **av)
{
	if(ac != 9) {
		std::cout << "The program take only 8 arguments" <<std::endl;
		return (0);
	}
	Point	a(std::strtof(av[1], NULL), std::strtof(av[2], NULL));
	Point	b(std::strtof(av[3], NULL), std::strtof(av[4], NULL));
	Point	c(std::strtof(av[5], NULL), std::strtof(av[6], NULL));
	Point	point(std::strtof(av[7], NULL), std::strtof(av[8], NULL));

	if (bsp(a, b, c, point))
		std::cout << "Your point is in the triangle" << std::endl;
	else
		std::cout << "Your point is not in the triangle" << std::endl;
	return 0;
}