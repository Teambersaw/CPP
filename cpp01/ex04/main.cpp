/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:33:05 by jrossett          #+#    #+#             */
/*   Updated: 2022/10/30 18:45:38 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main( void )
{
	std::string file;
	std::string s1;
	std::string s2;
	file = "sed.cpp";
	s1 = "std::string";
	s2 = "I AM A BUTTERFLY NOW";
	sed(file, s1, s2);
	return (0);
}
