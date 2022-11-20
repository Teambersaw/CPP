/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 00:16:31 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/20 00:58:13 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : x(0), y(0) {
	return ;	
}

Point::~Point( void ) {
	return ;
}

Point::Point( float const f1, float const f2 ) : x(f1), y(f2) {
	return ;	
}

Point::Point( Point const & point ) {
	*this = point;
}

Point & Point::operator=( Point const & point) {
	if (this != &point) {
		return *this;
	}
	return *this;
}