/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:41:08 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/29 22:19:41 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

class AMateria;

class ICharacter {

	public:

		virtual ~ICharacter() {}

		virtual std::string const & getName() const = 0;

		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;

		virtual void use(int idx, ICharacter& target) = 0;
};

#endif