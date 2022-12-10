/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 10:36:53 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/10 15:45:07 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template< typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{

	public:

		typedef	typename std::stack<T, Container>::container_type::iterator		iterator;
		typedef	typename std::stack<T, Container>::container_type::const_iterator		const_iterator;


		MutantStack<T, Container>( void ) : std::stack<T, Container>() {}

		MutantStack<T, Container>( MutantStack const & cpy ) : std::stack<T, Container>(cpy) {}

		virtual ~MutantStack<T, Container>( void ) {}

		MutantStack & operator=( MutantStack const & cpy ) {
			if (this != &cpy)
				this->c = cpy.c;
			return (*this);
		}

		iterator begin() {
			return (this->c.begin());
		}
		
		iterator end() {
			return (this->c.end());
		}

		const_iterator begin() const {
			return (this->c.begin());
		}
		
		const_iterator end() const {
			return (this->c.end());
		}
};

#endif