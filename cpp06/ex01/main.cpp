/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 22:28:53 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/01 22:49:38 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>
#include <cstdint>

uintptr_t serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}

int	main()
{
	Data	*ptr;
	uintptr_t	raw;

	std::cout << ptr->getChar() << std::endl;
	std::cout << &ptr << std::endl;

	raw = serialize(ptr);
	std::cout << raw << std::endl;
	std::cout << &raw << std::endl;
	ptr = deserialize(raw);
	std::cout << ptr->getChar() << std::endl;
	return (0);
}