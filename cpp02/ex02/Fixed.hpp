/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:16:32 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/03 19:34:23 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

class	Fixed {

	public:

		Fixed( void );
		Fixed( Fixed const & fixed );
		Fixed( const int integer );
		Fixed( const float floater );
		~Fixed( void );

		bool	operator>( Fixed const & fixed ) const;
		bool	operator<( Fixed const & fixed ) const;
		bool	operator>=( Fixed const & fixed ) const;
		bool	operator<=( Fixed const & fixed ) const;
		bool	operator==( Fixed const & fixed ) const;
		bool	operator!=( Fixed const & fixed ) const;
 
		Fixed &	operator=( Fixed const & fixed );
		Fixed	operator+( Fixed const & fixed );
		Fixed	operator-( Fixed const & fixed );
		Fixed	operator*( Fixed const & fixed );
		Fixed	operator/( Fixed const & fixed );

		Fixed &	operator++();
		Fixed	operator++(int);
		Fixed &	operator--();
		Fixed	operator--(int);

		static Fixed	&min(Fixed &fixe1, Fixed &fixe2);
		static Fixed const &min(Fixed const &fixe1, Fixed const &fixe2);
		static Fixed &max(Fixed &fixe1, Fixed &fixe2);
		static Fixed const &max(Fixed const &fixe1, Fixed const &fixe2);

		int getRawBits( void ) const;
		void setRawBits( int const raw );

		float toFloat( void ) const;
		int toInt( void ) const;

	private:

		int _fixe;
		static const int _bits;

};

std::ostream &	operator<<( std::ostream & o, Fixed const & i);

#endif