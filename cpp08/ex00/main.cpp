/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 09:41:30 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/09 14:17:29 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> myvector(30, 0);
	std::queue<int> myvector(30, 0);
	myvector[5] = 1;
	try {
		std::cout << easyfind<std::vector<int> >(myvector, 1) << std::endl;
	}
	catch(std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}