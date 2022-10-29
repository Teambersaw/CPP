/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:54:35 by jrossett          #+#    #+#             */
/*   Updated: 2022/10/29 19:04:08 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{ 
	std::string str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "string adress: " << &str << std::endl;
	std::cout << "*stringPTR adress: " << stringPTR << std::endl;
	std::cout << "&string adress: " << &stringREF << std::endl;

	std::cout << "string value: " << str << std::endl;
	std::cout << "*stringPTR value: " << *stringPTR << std::endl;
	std::cout << "&string value: " << stringREF << std::endl;
	return  (0);
}