/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:40:39 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/24 13:07:49 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) {
	return ;
}

Ice::Ice( Ice const & Ice ) {
	*this = Ice;
	return ;
}

Ice::~Ice( void ) {
	return ;
}

Ice & Ice::operator=( Ice const & Ice ) {
	return ;
}

Ice* Ice::clone() const {
	Ice *clone;
	return (clone);
}
	

void Ice::use( ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
	return ;
}