/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:23:04 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/18 14:07:39 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUNTANTSTACK_HPP
# define MUNTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>

class MutantStack : public std::stack<T> {
  public:
    MutantStack() : std::stack<T>() {}
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    
    iterator begin() 
    {
        return this->c.begin();
    }
    iterator end() 
    {
        return this->c.end();
    }
    const_iterator begin() const 
    {
        return this->c.cbegin();
    }
    const_iterator end() const 
    {
        return this->c.cend();
    }
};

#endif
