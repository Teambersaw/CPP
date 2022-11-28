/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:10:01 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/28 23:49:59 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : name("Default"), grade(150) {}

Bureaucrat::Bureaucrat( std::string Name, int i ) : name(Name) {
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
	this->grade -= 1;
}

void Bureaucrat::lower_grade( void ) {
	this->grade += 1;
}

std::string const & Bureaucrat::getName( void ) const {
	return (this->name);
}

int	Bureaucrat::getGrade() const {
	return (this->grade);
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << '.' << std::endl;
	return (o);
}
