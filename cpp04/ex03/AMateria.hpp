/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:40:01 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/27 00:26:31 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {

	public:

		AMateria( void );
		AMateria( AMateria const & AMateria );
		AMateria( std::string const & type );
		virtual ~AMateria( void );

		AMateria & operator=( AMateria const & AMateria ); 
		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use( ICharacter & target );

	protected:

		std::string	_type;
};