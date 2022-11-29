/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:44:22 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/29 23:03:05 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <stdexcept>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	public:

		class GradeTooHighException : public std::exception {
			public:
				virtual char const *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual char const *what() const throw();
		};

		Form( void );
		Form( Form const & Form );
		Form( std::string name, int grade_sign, int grade_exec);
		virtual ~Form( void );

		Form & operator=( Form const & Form );

		void beSigned( Bureaucrat & Bureaucrat );

		std::string const & getName( void ) const;
		bool getSign( void ) const;
		int const & getGradeSign( void ) const;
		int const & getGradeExec( void ) const;

	private:

		std::string const name;
		bool sign;
		int const grade_sign;
		int const grade_exec;
};

std::ostream & operator<<(std::ostream & o, Form const & Form);

#endif