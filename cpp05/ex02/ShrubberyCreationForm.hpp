/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:11:35 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/30 15:06:15 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <iostream>
# include <fstream>
# include <ctime>

class ShrubberyCreationForm : public Form {

	public:

		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const & cpy);
		virtual ~ShrubberyCreationForm( void );

		ShrubberyCreationForm & operator=( ShrubberyCreationForm const & rhs);

		virtual void UseForm( void ) const;

	private:

		std::string target;
};

#endif