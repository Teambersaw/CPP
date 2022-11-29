/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:28:37 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/29 22:17:50 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
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

		virtual void use( int idx, ICharacter& target );
	
	private:

		AMateria	*inventory[4];
		std::string _Name;
};

#endif