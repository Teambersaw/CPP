/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:40:32 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/29 22:19:15 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria {

	public:

			Cure( void );
			Cure( Cure const & Cure );
			virtual ~Cure( void );

			Cure & operator=( Cure const & Cure );

			virtual Cure* clone() const;
			virtual void use( ICharacter & target );
};

#endif