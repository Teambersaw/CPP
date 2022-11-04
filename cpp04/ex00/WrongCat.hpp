/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:26:59 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/04 19:26:59 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
# define WrongCat_HPP

# include "WrongAnimal.hpp"
# include <iostream>

class WrongCat : public WrongAnimal {

	public:

		WrongCat( void );
		WrongCat( WrongCat const &WrongCat);
		~WrongCat( void );

		WrongCat & operator=( WrongCat const & WrongCat);

		void	makeSound( void ) const;

	private:

		std::string type;

};

#endif