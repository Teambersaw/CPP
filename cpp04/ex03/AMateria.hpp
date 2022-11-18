/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:36:33 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/08 13:02:37 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>

class AMateria {

	protected:

		std::string	_type;

	public:

		AMateria( void );
		AMateria( AMateria const &amateria);
		AMateria(std::string const & type);
		~AMateria( void );

		AMateria & operator=( AMateria const & amateria);

		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif