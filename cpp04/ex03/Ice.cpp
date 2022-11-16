/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:03:36 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/08 13:06:18 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) {
	return ;
}

Ice::Ice( Ice const &Ice) {
	*this = Ice;
	return ;
}

Ice::~Ice( void ) {
	return ;
}

Ice & Ice::operator=( Ice const & Ice) {
	if (this != &Ice)
		return (*this);
	return (*this);
}