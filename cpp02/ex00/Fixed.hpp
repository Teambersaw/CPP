/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:16:32 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/01 18:29:16 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed {

	public:

		Fixed( void );
		Fixed( Fixed const & fixed );
		~Fixed( void );

		Fixed &	operator=( Fixed const & fixed);

		int getRawBits( void ) const;
		void setRawBits( int const raw );

	private:

		int _fixe;
		static const int _bits;

};

#endif