/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 09:41:42 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/09 14:09:49 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <vector>
# include <iterator>
# include <stdexcept>

template< typename T >
int easyfind(T contain, int occur) {
	typename T::iterator	it;
	it = std::find(contain.begin(), contain.end(), occur);
	if (it == contain.end())
		throw (std::exception());
	return (*it);
}

#endif