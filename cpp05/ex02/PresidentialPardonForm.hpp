/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:11:08 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/30 16:01:23 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <vector>

# include "Form.hpp"
# include <iostream>

class PresidentialPardonForm : public Form {

	public:

		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const & PresidentialPardonForm);
		virtual ~PresidentialPardonForm( void );

		PresidentialPardonForm & operator=( PresidentialPardonForm const & PresidentialPardonForm);

		virtual void UseForm( void ) const;

	private:

		std::string target;
};

#endif