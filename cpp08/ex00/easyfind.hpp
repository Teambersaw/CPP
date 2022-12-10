/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 09:41:42 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/09 18:19:55 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <vector>
# include <deque>
# include <list>
# include <iterator>
# include <stdexcept>

class NotFound : public std::exception {
	public:
		virtual char const *what(void) const throw();
};

template< typename T >
int easyfind(T contain, int occur) {
	typename T::iterator	it;
	it = std::find(contain.begin(), contain.end(), occur);
	if (it == contain.end())
		throw (NotFound());
	return (*it);
}

#endif