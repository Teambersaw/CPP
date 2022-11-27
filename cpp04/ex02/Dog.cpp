/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:39:09 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/04 16:43:31 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal() {
	std::cout << "Default Dog contructor called" << std::endl;
	dog = new Brain();
	this->type = "Dog";
	return ;
}

Dog::Dog( Dog const &Dog ) : Animal(Dog) {
	std::cout << "Copy Dog contructor called" << std::endl;
	dog = new Brain();
	this->type = "Dog";
	*this = Dog;
	return ;
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called" << std::endl;
	delete this->dog;
	return ;
}

Dog & Dog::operator=( Dog const & Dogs ) {
	if (this != &Dogs)
	{
		for (int i = 0; i < 100; i++) {
			this->dog->setIdeas(Dogs.dog->getIdeas(i), i);
		}
		this->type = Dogs.type;
	}
	return (*this);
}

void	Dog::makeSound( void ) const{
		std::cout << "BARK BARK" << std::endl;
}

std::string const &Dog::getIdea( int const i ) const {
	return (dog->getIdeas(i));
}

void	Dog::setIdea( std::string idea, int const i) {
	dog->setIdeas( idea, i);
}
