/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 18:38:02 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/09 23:28:36 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# include <vector>
# include <stdexcept>
# include <algorithm>
# include <iostream>
# include <limits>

class Span {

	public:

		class MaxSize : public std::exception {
			public:
				virtual char const *what() const throw();
		};

		class NoSpan : public std::exception {
			public:
				virtual char const *what() const throw();
		};

		Span( void );
		Span( Span const & cpy );
		Span( unsigned int n );
		~Span( void );

		Span & operator=( Span const & cpy );

		void addNumber( int add );
		int shortestSpan( void );
		unsigned int longestSpan( void );

		void addMultiNumber( int *tab_int, unsigned int size);
		std::vector<int>	tab;

	private:

		unsigned int N;
};
#endif