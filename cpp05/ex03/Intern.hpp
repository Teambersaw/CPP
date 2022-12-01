/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 00:57:02 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/01 01:21:14 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"

class Intern {

	public:

		Intern( void );
		Intern( Intern const & cpy );
		virtual ~Intern( void );

		Intern & operator=( Intern const & rhs );

		Form *makeForm(std::string Form_name, std::string target);

		class NotFound : public std::exception {
			public:
				virtual char const *what(void) const throw();
		};
};

#endif