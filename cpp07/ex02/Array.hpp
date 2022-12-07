/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 22:03:54 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/07 13:37:19 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template< typename T >
class Array {
	
	public:

		class OutOfRange : public std::exception {
			public:
				virtual char const *what() const throw() {
					return ("Error: Index is out of range !");
				}
		};

		Array<T>( void ) : a(NULL), N(0) {}

		Array<T>( unsigned int n ): N(n) {
			this->a = new T[n]();
		}

		Array<T>( Array const & cpy ): N(cpy.N) {
			this->a = new T[this->N];
			for (unsigned int i = 0; i < this->N; i++) {
				this->a[i] = cpy.a[i];
			}
		}

		~Array<T>( void ) {
			delete [] this->a;
		}

		Array & operator=( Array const & cpy ) {
			if (this != &cpy) {
				delete [] this->a;
				this->N = cpy.N;
				this->a = new T[this->N];
				for (unsigned int i = 0; i < this->N; i++)
					this->a[i] = cpy.a[i];
			}
			return (*this);
		}

		unsigned int size( void ) {
			return (this->N);
		}

		T	&operator[]( unsigned int i ) {
			if (i >= this->N)
				throw(OutOfRange());
			return (this->a[i]);
		}

	private:

		T *a;
		unsigned int N;

};

#endif