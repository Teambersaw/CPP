/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:38:19 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/23 21:24:18 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{
	//Dog	dog;
	//Animal	Animals;

	{
		const Animal *animal[6];

		for (int i = 0; i < 6; i++) {
			if (i % 2)
				animal[i] = new Dog;
			else
				animal[i] = new Cat;
			std::cout << std::endl;
		}
		for (int i = 0; i < 6; i++) {
			animal[i]->makeSound();
		}
		std::cout << std::endl;
		for (int i = 0; i < 6; i++) {
			delete animal[i];
			std::cout << std::endl;
		}
		std::cout << std::endl << std::endl << std::endl;
	}

	{
		Cat	*cat = new Cat;
		cat->setIdea("YES", 0);
		cat->setIdea("NO", 1);
		Cat	*cat2 = new Cat(*cat);

		std::cout << std::endl;
		std::cout << cat->getIdea( 0 ) << std::endl;
		std::cout << cat2->getIdea( 0 ) << std::endl << std::endl;

		std::cout << cat->getIdea( 1 ) << std::endl;
		std::cout << cat2->getIdea( 1 ) << std::endl << std::endl;

		cat->setIdea("CHANGE CAT", 0);
		cat2->setIdea("CHANGE CAT2", 0);

		std::cout << cat->getIdea( 0 ) << std::endl;
		std::cout << cat2->getIdea( 0 ) << std::endl << std::endl;

		std::cout << cat->getIdea( 1 ) << std::endl;
		std::cout << cat2->getIdea( 1 ) << std::endl << std::endl;

		delete cat;
		delete cat2;

		std::cout << std::endl << std::endl << std::endl;
	}

	{
		Dog	*dog = new Dog;
		dog->setIdea("YES", 0);
		dog->setIdea("NO", 1);
		Dog	*dog2 = new Dog(*dog);

		std::cout << std::endl;
		std::cout << dog->getIdea( 0 ) << std::endl;
		std::cout << dog2->getIdea( 0 ) << std::endl << std::endl;

		std::cout << dog->getIdea( 1 ) << std::endl;
		std::cout << dog2->getIdea( 1 ) << std::endl << std::endl;

		dog->setIdea("CHANGE Dog", 0);
		dog2->setIdea("CHANGE Dog2", 0);

		std::cout << dog->getIdea( 0 ) << std::endl;
		std::cout << dog2->getIdea( 0 ) << std::endl << std::endl;

		std::cout << dog->getIdea( 1 ) << std::endl;
		std::cout << dog2->getIdea( 1 ) << std::endl << std::endl;

		delete dog;
		delete dog2;
	}

	return (0);
}