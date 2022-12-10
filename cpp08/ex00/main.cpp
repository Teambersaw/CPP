/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 09:41:30 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/09 18:34:19 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

char const *NotFound::what() const throw() {
	return ("Elem not found in the array");	
}

int main()
{
	std::vector<int> myvector(30, 0);
	std::list<int> mylist(30, 0);
	std::deque<int> mydeque(30, 0);
	myvector[5] = 1;
	mydeque[28] = 18;

	try {
		std::cout << easyfind<std::vector<int> >(myvector, 1) << std::endl;
		std::cout << easyfind<std::list<int> >(mylist, 0) << std::endl;
		std::cout << easyfind<std::deque<int> >(mydeque, 1) << std::endl;
	}
	catch(std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}