/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:23:04 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/22 11:16:20 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUNTANTSTACK_HPP
# define MUNTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T> >

class MutantStack : public std::stack<T, Container> {
  public:
    typedef typename Container::iterator iterator;
    MutantStack() : std::stack<T>()
	{
		std::cout << "MutantStack Default constructor called\n" << std::endl;
	}
	~MutantStack()
	{
		std::cout << "MutantStack Destructor called \n" << std::endl;
	}
	MutantStack(const MutantStack& obj)
	{
		std::cout << "MutantStack Copy constructor called \n" << std::endl;
		*this = obj;
	}
	MutantStack& operator=(const MutantStack& obj)
	{
        if(this != &obj)
        {
            std::cout << "MutantStack Copy assignment operator called \n" << std::endl;
            this->c = obj.c;
        }
		return (*this);
	}
    iterator begin() 
    {
        return this->c.begin();
    }
    iterator end() 
    {
        return this->c.end();
    }
};

#endif