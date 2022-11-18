/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:15:58 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/18 18:42:32 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {

	Fixed a;

	std::cout << std::endl;

	Fixed b( a );

	std::cout << std::endl;

	Fixed c;

	std::cout << std::endl;

	c = b;

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << a.getRawBits() << std::endl;
	a.setRawBits(42);
	std::cout << a.getRawBits() << std::endl;

	std::cout << std::endl;

	std::cout << b.getRawBits() << std::endl;
	b.setRawBits(52);
	std::cout << b.getRawBits() << std::endl;

	std::cout << std::endl;

	std::cout << c.getRawBits() << std::endl;
	c.setRawBits(62);
	std::cout << c.getRawBits() << std::endl;

	std::cout << std::endl;
	
	return 0;
}