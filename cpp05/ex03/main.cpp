/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:10:23 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/01 01:04:02 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
// 	try
// 	{
// 		Bureaucrat Bastien("Bastien", 1);
// 		Bureaucrat Theo("Theo", 45);
// 		Bureaucrat Hugo("Hugo", 146);

// 		PresidentialPardonForm President("Hugo");
// 		RobotomyRequestForm	Robotomy("JuloT");
// 		ShrubberyCreationForm Shrubbery("Théo");

// 		std::cout << President << std::endl;
// 		Bastien.executeForm(President);
// 		Bastien.signForm(President);
// 		Bastien.executeForm(President);

// 		std::cout << std::endl;
// 		std::cout << Shrubbery << std::endl;
// 		Hugo.signForm(Shrubbery);
// 		Hugo.executeForm(Shrubbery);
// 		Hugo.upper_grade();

// 		std::cout << std::endl;

// 		Hugo.signForm(Shrubbery);
// 		Hugo.executeForm(Shrubbery);
// 		Theo.executeForm(Shrubbery);

// 		std::cout << std::endl;
// 		std::cout << Robotomy << std::endl;
// 		Theo.signForm(Robotomy);
// 		Theo.executeForm(Robotomy);
		
		
// 		std::cout << President << std::endl;
// 		std::cout << Shrubbery << std::endl;
// 		std::cout << Robotomy << std::endl;
// 	}
// 	catch (std::exception const &e) 
// 	{
// 		std::cerr << "Error" << e.what() << " Make sure the grade is between 1 and 150." << std::endl;
// 	}{
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	}
	return (0);
}