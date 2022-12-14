/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 00:16:28 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/23 00:19:08 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point {

	public:

		Point( void );
		Point( Point const & point );
		Point( float const f1, float const f2);
		~Point( void );

		Point & operator=( Point const & point );
		Fixed	const getX( void ) const;
		Fixed	const getY( void ) const;

	private:

		Fixed const	x;
		Fixed const	y;

};

#endif