/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:21:34 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/05 00:25:10 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main( int ac, char **av )
{
	if (ac != 2) {
		std::cerr << "Wrong number of argument." << std::endl;
		return (1);
	}

	Convert	convert(av[1]);

	convert.searchType();
	convert.convertType();
	return (0);
}