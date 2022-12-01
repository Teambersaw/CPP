/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:10:01 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/01 00:29:53 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : name("Default"), grade(150) {}

Bureaucrat::Bureaucrat( std::string Name, int grade ) : name(Name), grade(grade) {
	if (grade < 1)
		throw(GradeTooHighException());
	else if (grade > 150)
		throw(GradeTooLowException());
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
	if (this->grade == 1)
		throw (GradeTooHighException());
	this->grade -= 1;
}

void Bureaucrat::lower_grade( void ) {
	if (this->grade == 150)
		throw (GradeTooLowException());
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

void Bureaucrat::signForm( Form & Form ) {
	try {
		Form.beSigned(*this);
	}
	catch (std::exception &e) {
		std::cerr << this->name << " couldn't sign " << Form.getName() << " because" << e.what() << std::endl;
		return ;
	}
	std::cout << this->name << " signed " << Form.getName() << '.' << std::endl;
}

void Bureaucrat::executeForm(Form const & form)	{
	try {
		form.execute(*this);
	}
	catch (std::exception &e) {
		std::cerr << this->name << " couldn't execute " << form.getName() << " because" << e.what() << std::endl;
		return ;
	}
	std::cout << this->name << " executed " << form.getName() << '.' << std::endl;
}