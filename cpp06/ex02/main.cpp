/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:49:33 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/02 16:08:04 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

void identify(Base& p) {
	try {
		p = dynamic_cast<A &>(p);
		std::cout << "The true type is A" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
	try {
		p = dynamic_cast<B &>(p);
		std::cout << "The true type is B" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
	try {
		p = dynamic_cast<C &>(p);
		std::cout << "The true type is C" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
}

void identify(Base* p) {
	if (dynamic_cast<A *>(p))
		std::cout << "The true type is A" << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "The true type is B" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "The true type is C" << std::endl;
}

Base * generate(void) {
	int i = rand() % 3;
	if (i == 0){
		std::cout << "A" << std::endl;
		return new A;
	}
	if (i == 1){
		std::cout << "B" << std::endl;
		return new B;
	}
	std::cout << "C" << std::endl;
	return new C;
}

int main( void )
{
	Base	*p;
	srand(time(NULL));
	p = generate();
	identify(p);
	identify(*p);
	delete p;
	return (0);
}