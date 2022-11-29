/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:40:01 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/29 22:17:48 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

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

#endif