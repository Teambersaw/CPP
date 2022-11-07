/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:38:19 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/08 00:10:48 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{
	const Animal *animal[100];

	for (int i = 0; i < 100; i++) {
		if (i % 2)
			animal[i] = new Dog;
		else
			animal[i] = new Cat;
	}


	animal[1]->makeSound();
	animal[6]->makeSound();
	animal[17]->makeSound();
	animal[48]->makeSound();
	animal[33]->makeSound();
	animal[28]->makeSound();

	for (int i = 0; i < 100; i++) {
		delete animal[i];
	}
	return (0);
}