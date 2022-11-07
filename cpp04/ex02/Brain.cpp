/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:56:12 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/07 23:52:18 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Default Brain contructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "none";
	return ;
}

Brain::Brain( Brain const &Brain ) {
	std::cout << "Copy Brain contructor called" << std::endl;
	*this = Brain;
	return ;
}

Brain::~Brain( void ) {
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

Brain & Brain::operator=( Brain const & Brain ) {
	if (this != &Brain) {
		for (int i = 0; i < 100; i++)
			ideas[i] = Brain.ideas[i];
	}
	return (*this);
}