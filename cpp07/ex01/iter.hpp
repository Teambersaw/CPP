/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:39:14 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/07 13:05:34 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T >
	void	f( T elem, int i) {
	std::cout << "Index: " << i << " value: " << elem << std::endl;
	}

template< typename T >

	void iter( T *tab, int size, void (*f)( T elem, int i) ) {
		for (int i = 0; i < size; i++) {
			(*f)(tab[i], i);
		}
	}

#endif