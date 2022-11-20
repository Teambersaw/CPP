/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:39:21 by jrossett          #+#    #+#             */
/*   Updated: 2022/11/04 16:41:02 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat : public Animal {

	public:

		Cat( void );
		Cat( Cat const &Cat );
		virtual ~Cat( void );

		Cat & operator=( Cat const & Cat );
		virtual void	makeSound( void ) const;

		std::string const &getIdea( int const i ) const;
		void	setIdea( std::string idea, int const i );

	private:

		Brain*	cat;
};

#endif