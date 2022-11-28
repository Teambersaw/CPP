/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:10:23 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/28 23:52:42 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat employee;
	Bureaucrat employee("Hugo", 125);

	std::cout << employee;
	employee.upper_grade();
	std::cout << employee;
	employee.upper_grade();
	std::cout << employee;
	employee.lower_grade();
	std::cout << employee;
	return (0);
}