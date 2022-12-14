/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:40:51 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/29 22:19:26 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria {

	public:

			Ice( void );
			Ice( Ice const & Ice );
			virtual ~Ice( void );

			Ice & operator=( Ice const & Ice );

			virtual Ice* clone() const;
			virtual void use( ICharacter & target );
};

#endif