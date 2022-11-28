/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:41:45 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/28 19:19:46 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	public:

		MateriaSource( void );
		MateriaSource( MateriaSource const & MateriaSource );
		virtual ~MateriaSource(void);

		MateriaSource & operator=( MateriaSource const & MateriaSource );

		virtual void learnMateria( AMateria* );
		virtual AMateria* createMateria(std::string const & type );

	private:

		AMateria	*learn[4];
};