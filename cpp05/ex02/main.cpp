/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:10:23 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/29 22:03:36 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Bastien("Bastien", 1);
		Bureaucrat Theo("Theo", 75);
		Bureaucrat Hugo("Hugo", 150);
		Form		Form1("Apero", 1, 150);
		//Form		Form2("Apero", 500, 0);

		std::cout << Bastien << Theo << Hugo << std::endl;

		std::cout << Form1 << std::endl;
		Bastien.signForm(Form1);

		std::cout << std::endl;
		std::cout << Form1 << std::endl;
		Hugo.signForm(Form1);

		std::cout << std::endl;
		Bastien.lower_grade();
		Bastien.signForm(Form1);

		std::cout << std::endl;
		std::cout << Form1 << std::endl;
		Theo.signForm(Form1);
		
		std::cout << std::endl;
		std::cout << Form1 << std::endl;
	}
	catch (std::exception const &e) 
	{
		std::cerr << "Error" << e.what() << " Make sure the grade is between 1 and 150." << std::endl;
	}
	return (0);
}