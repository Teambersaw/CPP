/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:39:09 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/04 16:43:31 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal() {
	std::cout << "Default Cat contructor called" << std::endl;
	cat = new Brain();
	this->type = "Cat";
	return ;
}

Cat::Cat( Cat const &Cats ) : Animal() {
	std::cout << "Copy Cat contructor called" << std::endl;
	cat = new Brain();
	*this = Cats;
	return ;
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor called" << std::endl;
	delete this->cat;
	return ;
}

Cat & Cat::operator=( Cat const & Cats ) {
	if (this != &Cats)
	{
		for (int i = 0; i < 100; i++) {
			this->cat->setIdeas(Cats.cat->getIdeas(i), i);
		}
		this->type = Cats.type;
	}
	return (*this);
}

void	Cat::makeSound( void ) const{
		std::cout << "MEOW MEOW" << std::endl;
}

std::string const &Cat::getIdea( int const i ) const {
	return (cat->getIdeas(i));
}

void	Cat::setIdea( std::string idea, int const i) {
	cat->setIdeas( idea, i);
}
