/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:10:11 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/30 22:46:09 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <stdexcept>
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat {

	public:

		class GradeTooHighException : public std::exception {
			public:
				virtual char const *what(void) const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual char const *what(void) const throw();
		};

		Bureaucrat( void );
		Bureaucrat( std::string Name, int grade );
		Bureaucrat( Bureaucrat const & Bureaucrat);
		~Bureaucrat( void );

		Bureaucrat & operator=( Bureaucrat const & Bureaucrat);

		void signForm( Form & Form );

		void upper_grade( void );
		void lower_grade( void );

		std::string const & getName( void ) const;
		int	getGrade( void ) const;

		void executeForm(Form const & form);

	private:

		std::string const name;
		int	grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif