/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 22:03:54 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/07 00:25:07 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template< typename T >
class Array {
	
	public:

		Array<T>( void ) : a(new T[0]) {}

		Array<T>( unsigned int n ) {
			std::cout << "called";
			this->a[n] = new T[n];
		}

		Array<T>( Array const & cpy ) {
			this->a = new T[cpy.size()];
			for (unsigned int i = 0; i < cpy.size(); i++) {
				this->a[i] = cpy.a[i];
			}
		}

		~Array<T>( void ) {
			delete [] this->a;
		}

		Array & operator=( Array const & cpy ) {
			delete [] this->a;
			this->a = new T[cpy.size()];
			for (unsigned int i = 0; i < cpy.size(); i++) {
				this->a[i] = cpy.a[i];
			}
			return (*this);
		}

		unsigned int size( void ) {
			return (sizeof(this->a) * 1 / sizeof(T));
		}

		T	const &getarray( unsigned int n) {
			return (a[n]);
		}

	private:

		T *a;

};

#endif