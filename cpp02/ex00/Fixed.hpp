/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:16:32 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/01 15:18:43 by jrossett         ###   ########.fr       */
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

		int fixe;
		int static const bits;

};

#endif