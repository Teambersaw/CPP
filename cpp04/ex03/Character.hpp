/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:28:37 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/24 13:35:33 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ICharacter.hpp"

class Character : public ICharacter {

	public:

		Character( void );
		Character( std::string const & name );
		Character( Character const & Character );
		virtual ~Character( void );

		Character & operator=( Character const & Character);

		virtual std::string const & getName() const;

		virtual void equip( AMateria* m );
		virtual void unequip( int idx );

		virtual void use( int idx, Character& target );
	
	protected:

		std::string _Name;
};