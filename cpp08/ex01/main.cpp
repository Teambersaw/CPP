/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 18:39:11 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/10 10:29:45 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>
#include <cstdlib>

int main()
{
	{
		int tab_int[] = {10, 40, 1200, 100, -50, 90, 400, 20};
		Span sp = Span(150);
		try {
			sp.addNumber(-100);
			sp.addNumber(350);
			sp.addNumber(150);
			sp.addNumber(450);


			std::cout << "longest distance: " << sp.longestSpan() << std::endl;
			std::cout << "shortest distance: " << sp.shortestSpan() << std::endl;
			for (std::vector<int>::iterator it = sp.tab.begin(); it < sp.tab.end(); it++)
					std::cout << *it << ' ';
			std::cout << std::endl;


			sp.addMultiNumber(tab_int, 8);
			for (std::vector<int>::iterator it = sp.tab.begin(); it < sp.tab.end(); it++)
				std::cout << *it << ' ';
			std::cout << std::endl;
			std::cout << "longest distance: " << sp.longestSpan() << std::endl;
			std::cout << "shortest distance: " << sp.shortestSpan() << std::endl;
		}
		catch (const std::exception &e) {
			for (std::vector<int>::iterator it = sp.tab.begin(); it < sp.tab.end(); it++)
				std::cout << *it << ' ';
			std::cout << std::endl;
			std::cout << "longest distance: " << sp.longestSpan() << std::endl;
			std::cout << "shortest distance: " << sp.shortestSpan() << std::endl;
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "\n\n\n";

	{
		Span sp = Span(10000);
		srand(time(NULL));
		int tab[10000];

		for (int i = 0; i < 10000; i++)
			tab[i] = rand();
		sp.addMultiNumber(tab, 10000);
		// for (std::vector<int>::iterator it = sp.tab.begin(); it < sp.tab.end(); it++)
		// 	std::cout << *it << ' ';
		// std::cout << std::endl;
		std::cout << "longest distance: " << sp.longestSpan() << std::endl;
		std::cout << "shortest distance: " << sp.shortestSpan() << std::endl;

		try {
			sp.addNumber(4);
		}
		catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "\n\n\n";

	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		return (0);
	}
}