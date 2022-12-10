/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 10:37:20 by jrossett          #+#    #+#             */
/*   Updated: 2022/12/10 15:45:30 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <vector>
#include <iostream>

int main()
{

	{

		MutantStack<int>	mstack;

		mstack.push(1);
		mstack.push(2);

		std::cout << "return top function: "<< mstack.top() << std::endl;

		mstack.pop();

		std::cout << "Size of stack: " << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(4);
		mstack.push(5);
		mstack.push(6);

		std::cout << "Size of stack: " << mstack.size() << std::endl;
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		std::cout << "first ++it value: " << *(++it) << std::endl;
		std::cout << "second ++it value: " << *(++it) << std::endl;
		--it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::stack<int> s(mstack);

	}

	std::cout << "\n\n";

	{

		MutantStack<int, std::vector<int> >	mstack;

		mstack.push(1);
		mstack.push(2);

		std::cout << "return top function: "<< mstack.top() << std::endl;

		mstack.pop();

		std::cout << "Size of stack: " << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(4);
		mstack.push(5);
		mstack.push(6);

		std::cout << "Size of stack: " << mstack.size() << std::endl;
		MutantStack<int, std::vector<int> >::iterator it = mstack.begin();
		MutantStack<int, std::vector<int> >::iterator ite = mstack.end();

		std::cout << "first ++it value: " << *(++it) << std::endl;
		std::cout << "second ++it value: " << *(++it) << std::endl;
		--it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::stack<int, std::vector<int> > s(mstack);

	}

	std::cout << "\n\n";

	{

		std::list<int>	mstack;

		mstack.push_back(1);
		mstack.push_back(2);

		std::cout << "return top function: "<< mstack.back() << std::endl;

		mstack.pop_back();

		std::cout << "Size of stack: " << mstack.size() << std::endl;

		mstack.push_back(3);
		mstack.push_back(4);
		mstack.push_back(5);
		mstack.push_back(6);

		std::cout << "Size of stack: " << mstack.size() << std::endl;
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();

		std::cout << "first ++it value: " << *(++it) << std::endl;
		std::cout << "second ++it value: " << *(++it) << std::endl;
		--it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

	}

	std::cout << "\n\n";

	{

		std::vector<int>	mstack;

		mstack.push_back(1);
		mstack.push_back(2);

		std::cout << "return top function: "<< mstack.back() << std::endl;

		mstack.pop_back();

		std::cout << "Size of stack: " << mstack.size() << std::endl;

		mstack.push_back(3);
		mstack.push_back(4);
		mstack.push_back(5);
		mstack.push_back(6);

		std::cout << "Size of stack: " << mstack.size() << std::endl;
		std::vector<int>::iterator it = mstack.begin();
		std::vector<int>::iterator ite = mstack.end();

		std::cout << "first ++it value: " << *(++it) << std::endl;
		std::cout << "second ++it value: " << *(++it) << std::endl;
		--it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

	}
	return (0);
}