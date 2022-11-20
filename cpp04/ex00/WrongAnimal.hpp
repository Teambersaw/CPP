/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:22:56 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/04 19:24:24 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {

	public:

		WrongAnimal( void );
		WrongAnimal( WrongAnimal const &WrongAnimal);
		virtual ~WrongAnimal( void );

		WrongAnimal & operator=( WrongAnimal const & WrongAnimal);

		std::string	const &getType( void ) const;
		void		makeSound( void ) const;

	protected:

		std::string type;

};

#endif