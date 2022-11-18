/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:15:58 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/18 20:38:38 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed f;
    Fixed a;
    Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed c(25.052f);
	a = c;

    std::cout << "a : " << a << std::endl;
    std::cout <<  "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl << std::endl;

    /* Comparision operands */
    std::cout << (a < b ? "a is less than b" : "a is greater than or equal b") << std::endl;
    std::cout << (b > a ? "b is greater than a" : "b is less than or equal to a") << std::endl;
    std::cout << (a <= b ? "a is less than or equal to b" : "a is greater than b") << std::endl;
    std::cout << (b >= a ? "b is greater than or equal to a" : "b is less than a") << std::endl;
    std::cout << (a == b ? "a is equal to b" : "a is different from b") << std::endl;
    std::cout << (b != a ? "b is different from a" : "b is equal to a") << std::endl << std::endl;

    /* Arithmetic operands */
    std::cout << "b + c = " << b + c << std::endl;
    std::cout << "b - c = " << b - c << std::endl;
    std::cout << "b * c = " << b * c << std::endl;
    std::cout << "b / c = " << b / c << std::endl << std::endl;

	std::cout << "f : " << f << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout <<  "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl << std::endl;

    /* Incrementation operands */
	 std::cout << ++f << std::endl;
    std::cout << f << std::endl;
    std::cout << f++ << std::endl;
    std::cout << f << std::endl << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl << std::endl;
    std::cout << --b << std::endl;
    std::cout << b << std::endl;
    std::cout << b-- << std::endl;
    std::cout << b << std::endl << std::endl;

    std::cout << "a : " << a << std::endl;
    std::cout <<  "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl << std::endl;

    std::cout << "Max between a and b " <<  Fixed::max( a, b ) << std::endl;
    std::cout << "Min between a and b " << Fixed::min(a, b) << std::endl;

	const Fixed d(12.05f);
	const Fixed e(6.41f);
	std::cout << "Max between d and e " <<  Fixed::max( d, e ) << std::endl;
    std::cout << "Min between d and e " << Fixed::min(d, e) << std::endl;
    return 0;
}