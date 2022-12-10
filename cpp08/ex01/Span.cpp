/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 18:38:38 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/10 10:29:09 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ) : N(0) {};

Span::Span( unsigned int n ) : N(n) {};

Span::Span( Span const & cpy) {
	this->N = cpy.N;
	this->tab = cpy.tab;
}

Span::~Span( void ) {};

Span & Span::operator=( Span const & cpy) {
	if (this != &cpy) {
		this->N = cpy.N;
		this->tab = cpy.tab;
	}
	return (*this);
}

void Span::addNumber(int add) {
	if (this->N == tab.size())
		throw(MaxSize());
	this->tab.push_back(add);
}

int Span::shortestSpan( void ) {
	if (tab.size() <= 1)
		throw(NoSpan());
	std::vector<int> tmp(tab);
	std::sort(tmp.begin(), tmp.end());
	int small = std::numeric_limits<int>::max();
	for (std::vector<int>::iterator it = tmp.begin(); it + 1 != tmp.end(); it++) {
		if (small > (*(it + 1)- *it))
			small = *(it + 1) - *it;
	}
	return (small);
}

unsigned int Span::longestSpan( void ) {
	if (tab.size() <= 1)
		throw(NoSpan());
	return ((*std::max_element(tab.begin(), tab.end())) - (*std::min_element(tab.begin(), tab.end())));
}

char const *Span::MaxSize::what() const throw() {
	return ("Can't add number: the maximum size is reached.");
}

char const *Span::NoSpan::what() const throw() {
	return ("Can't find distance: size is too small");
}

void Span::addMultiNumber( int *tab_int, unsigned int size ) {
	if (this->N < (tab.size() + size)) {
		size = (this->N - tab.size()); 
		this->tab.insert(tab.end(), tab_int, tab_int + size);
		throw(MaxSize());
	}
	this->tab.insert(tab.end(), tab_int, tab_int + size);
}