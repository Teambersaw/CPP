/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 00:58:28 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/01 10:45:53 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ) {}

Intern::Intern( Intern const & cpy ) {
	(void) cpy;
}

Intern::~Intern( void ) {}

Intern & Intern::operator=( Intern const & rhs ) {
	(void) rhs;
	return (*this);
}

Form	*Intern::shrubbery( std::string target ) {
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::robotomy( std::string target ) {
	return (new RobotomyRequestForm(target));
}

Form	*Intern::presidential( std::string target ) {
	return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm(std::string Form_name, std::string target) {
	std::string tab[3] = { "shrubbery creation", "robotomy request", "presidential pardon"};
	Form	*(Intern::*f[3])(std::string) = { &Intern::shrubbery, &Intern::robotomy, &Intern::presidential};
	for (int i = 0; i < 3; i++) {
		if (Form_name == tab[i]) {
			std::cout << "Intern creates " << Form_name << '.' << std::endl;
			return ((this->*f[i])(target));
		}
	}
	throw(NotFound());
}

char const *Intern::NotFound::what(void) const throw() {
	return ("This form does not exist.");
}