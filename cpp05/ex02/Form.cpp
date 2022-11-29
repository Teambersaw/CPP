/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:47:52 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/29 21:44:13 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) : name("default"), sign(false), grade_sign(150), grade_exec(150) {}

Form::Form( std::string name, int grade_sign, int grade_exec) : name(name), sign(false), grade_sign(grade_sign), grade_exec(grade_exec) {
	if (grade_sign < 1 || grade_exec < 1)
		throw(GradeTooHighException());
	else if (grade_sign > 150 || grade_exec > 150)
		throw(GradeTooLowException());
}

Form::Form( Form const & Form ) : name(Form.getName()), sign(Form.getSign()) , grade_sign(Form.getGradeSign()), grade_exec(Form.getGradeExec()) {}

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
	o << "Form name : " << Form.getName() << "\nSignature status : "<< Form.getSign()
	<< "\nGrade min to sign the form : " << Form.getGradeSign() << "\nGrade min to exec the form : " << Form.getGradeExec() << std::endl;
	return (o);
}

char const *Form::GradeTooHighException::what( void ) const throw() {
	return (" : grade is too high.");
}

char const *Form::GradeTooLowException::what( void ) const throw() {
	return (" : grade is too low.");
}

void Form::beSigned( Bureaucrat & Bureaucrat ) {
	if (Bureaucrat.getGrade() > this->grade_sign)
		throw(GradeTooLowException());
	this->sign = true;
}