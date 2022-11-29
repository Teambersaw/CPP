/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:47:52 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/29 16:21:12 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) : name("default"), sign(0), grade_sign(150), grade_exec(150) {}

Form::Form( std::string name, int grade_sign, int grade_exec) : name(name), sign(0), grade_sign(grade_sign), grade_exec(grade_exec) {}

Form::Form( Form const & Form ) : name(Form.name), sign(Form.sign), grade_sign(Form.grade_sign), grade_exec(Form.grade_exec) {}

Form::~Form( void ) {}

Form & Form::operator=( Form const & Form ) {
	if (this != &Form)
		sign = Form.sign;
	return (*this);
}

std::string const & Form::getName( void ) const {
	return (this->name);
}

bool Form::getSign( void ) const {
	return (this->sign);
}

int const & Form::getGradeSign( void ) const {
	return (this->grade_sign);
}

int const & Form::getGradeExec( void ) const {
	return (this->grade_exec);
}

std::ostream & operator<<(std::ostream & o, Form const & Form) {
	o << Form.getName() << Form.getSign() << Form.getGradeSign() << Form.getGradeExec() << std::endl;
}

char const *Form::GradeTooHighException::what( void ) const throw() {
	return (" : grade is too high.");
}

char const *Form::GradeTooLowException::what( void ) const throw() {
	return (" : grade is too low.");
}