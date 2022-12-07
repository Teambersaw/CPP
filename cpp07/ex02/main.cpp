/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 22:04:01 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/07 23:50:27 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	std::cout << "***** Int Tab test deep copy operator= *****" << std::endl << std::endl;


	Array<int> tab(30);
	Array<int> cpynt;


	tab[0] = 42;
	std::cout << "size of cpy: "<< cpynt.size() << std::endl << std::endl;
	std::cout << "cpy = tab" << std::endl;
	cpynt = tab;
	std::cout << "cpy[0] value: " << cpynt[0] << std::endl;
	std::cout << "tab[0] value: " << tab[0] << std::endl << std::endl;

	std::cout << "size of cpy: "<< cpynt.size() << std::endl;
	std::cout << "size of tab: "<< tab.size() << std::endl << std::endl;

	std::cout << "assign 21  to cpy[0]" << std::endl << std::endl;
	cpynt[0] = 21;
	std::cout << "cpy[0] value: " << cpynt[0] << std::endl;
	std::cout << "tab[0] value: " << tab[0] << std::endl << std::endl;
	


	std::cout << "***** Test Throw wrong index with operator[] *****" << std::endl << std::endl;


	try {
		Array<char> str(30);
		std::cout << str[33] << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl << std::endl;
	}

	std::cout << "***** std::string Tab test deep copy, copy constructor *****" << std::endl << std::endl;


	Array<std::string> string(30);
	std::cout << "assign \"Hello Corrector\" to string[5]" << std::endl;
	string[5] = "Hello Corrector";
	std::cout << "copy string in cpy with the copy constructor" << std::endl << std::endl;;
	Array<std::string> cpy(string);


	std::cout << "cpy[5] value: " << cpy[5] << std::endl;
	std::cout << "string[5] value: " << string[5] << std::endl << std::endl;;


	std::cout << "assign \"Hello World\" to string[5]" << std::endl << std::endl;
	string[5] = "Hello World";
	std::cout << "cpy[5] value: " << cpy[5] << std::endl;
	std::cout << "string[5] value: " << string[5] << std::endl << std::endl;
	return (0);
}