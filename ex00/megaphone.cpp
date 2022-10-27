/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:05:54 by jrossett          #+#    #+#             */
/*   Updated: 2022/10/27 18:31:33 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int i = 0;
	int j;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE NOISE *" << std::endl;
	else
	{
		while (av[++i])
		{
			j = 0;
			while (av[i][j])
				std::cout << (char)(std::toupper(av[i][j++]));

		}
		std::cout << std::endl;
	}
	return (0);
}