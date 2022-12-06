/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:39:05 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/06 19:58:33 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int main()
{
	std::string str[] = {"un", "deux", "trois", "quatre"};
	iter<std::string>(str, 4, f);

	std::cout << std::endl;

	int tab[] = {1, 2, 3, 4};
	iter<int>(tab, 4, f);

	std::cout << std::endl;

	char tabs[] = "hello";
	iter<char>(tabs, 5, f);

	return (0);
}