/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:10:23 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/01 11:13:04 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	Bastien("Bastien", 1);
	Bureaucrat	Theo("Théo", 75);
	Bureaucrat	Hugo("Hugo", 150);
	Form		Form1("Useless", 1, 150);

	std::cout << Bastien << Theo << Hugo << std::endl;

	std::cout << Form1 << std::endl;
	Hugo.signForm(Form1);

	std::cout << std::endl;
	std::cout << Form1 << std::endl;
	Bastien.signForm(Form1);


	std::cout << std::endl;
	std::cout << Form1 << std::endl;
	Theo.signForm(Form1);
	
	std::cout << std::endl;
	std::cout << Form1 << std::endl;
	return (0);
}