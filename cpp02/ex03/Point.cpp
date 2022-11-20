/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 00:16:31 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/20 16:06:17 by jrossett         ###   ########.fr       */
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

Fixed	 const Point::getX( void ) const {
	return (this->x);
}

Fixed	const Point::getY( void ) const {
	return (this->y);
}

Point & Point::operator=( Point const & points) {
	if (this != &points) {
		this->x = points.getX();
		this->y = points.getY();
	}
	return *this;
}