/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:15:58 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/23 00:18:05 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void )
{
	Point a(1, 0);
	Point b(0, 1);
	Point c;
	Point d(848, 8774);
	Point f(1, 1);
	Point g(0.8, 0.1);

	Point y(0.5, 0.5);
	Point z(0.3, 0.3);

	Point e(y);
	d = z;

	std::cout << "D point value : x = "<< d.getX() << " y = " << d.getY() << std::endl;
	bsp(a, b, c, d) ? std::cout << "TRUE D point is in the triangle" << std::endl : std::cout << "FALSE D point is not in the triangle" << std::endl;
	std::cout << std::endl <<"E point value : x = "<< e.getX() << " y = " << e.getY() << std::endl;
	bsp(a, b, c, e) ? std::cout << "TRUE E point is in the triangle" << std::endl : std::cout << "FALSE E point is not in the triangle" << std::endl;
	std::cout << std::endl <<"F point value : x = "<< f.getX() << " y = " << f.getY() << std::endl;
	bsp(a, b, c, f) ? std::cout << "TRUE F point is in the triangle" << std::endl : std::cout << "FALSE F point is not in the triangle" << std::endl;
	std::cout << std::endl <<"G point value : x = "<< g.getX() << " y = " << g.getY() << std::endl;
	bsp(a, b, c, g) ? std::cout << "TRUE G point is in the triangle" << std::endl : std::cout << "FALSE G point is not in the triangle" << std::endl;

	return (0);
}