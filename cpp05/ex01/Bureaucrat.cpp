/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:10:01 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/29 14:38:27 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : name("Default"), grade(150) {}

Bureaucrat::Bureaucrat( std::string Name, int i ) : name(Name) {
	if (i < 1)
		throw(GradeTooHighException());
	else if (i > 150)
		throw(GradeTooLowException());
	else
		this->grade = i;
}

Bureaucrat::Bureaucrat( Bureaucrat const & Bureaucrat ) : name(Bureaucrat.name) {
	*this = Bureaucrat;
}

Bureaucrat::~Bureaucrat( void ) {}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & Bureaucrat) {
	if (this != &Bureaucrat) {
		this->grade = Bureaucrat.grade;
	}
	return (*this);
}

void Bureaucrat::upper_grade( void ) {
	try {
		if (this->grade == 1)
			throw (GradeTooHighException());
	}
	catch (std::exception const &e) {
		std::cerr << "Can't upgrade " << this->name << e.what() << std::endl;
		return ;
	}
		this->grade -= 1;
}

void Bureaucrat::lower_grade( void ) {
	try {
		if (this->grade == 150)
			throw (GradeTooLowException());
	}
	catch (std::exception const &e) {
		std::cerr << "Can't downgrade " << this->name << e.what() << std::endl;
		return ;
	}
		this->grade += 1;
}

std::string const & Bureaucrat::getName( void ) const {
	return (this->name);
}

int	Bureaucrat::getGrade() const {
	return (this->grade);
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & Bureaucrat) {
	o << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << '.' << std::endl;
	return (o);
}

char const *Bureaucrat::GradeTooHighException::what(void) const throw() {
	return (" : The grade is too high.");
}

char const *Bureaucrat::GradeTooLowException::what(void) const throw() {
	return (" : The grade is too low.");
}