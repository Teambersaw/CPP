/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:05:03 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/06 19:52:46 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template< typename T >
	void swap( T &val1, T &val2 ) {
		T tmp = val1;
		val1 = val2;
		val2 = tmp;
	}

template< typename T >
	T const & min( T const & val1, T const & val2) {
		return ((val2 <= val1) ? val2 : val1);
	}

template< typename T >
	T const & max( T const & val1, T const & val2) {
		return ((val2 >= val1) ? val2 : val1);
	}

#endif