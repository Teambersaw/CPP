/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 22:28:53 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/05 00:47:26 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>
#include <stdint.h>

uintptr_t serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}

int	main()
{
	Data	*ptr = new Data;
	uintptr_t	raw;

	std::cout << "char value : "<< ptr->getChar() << std::endl;
	std::cout << "adress ptr value : " << &ptr << std::endl;
	raw = serialize(ptr);
	std::cout << "uintptr_t value : " << raw << std::endl;
	ptr = deserialize(raw);
	std::cout << "char value : " << ptr->getChar() << std::endl;
	std::cout << "adress ptr value : " << &ptr << std::endl;
	delete ptr;
	return (0);
}