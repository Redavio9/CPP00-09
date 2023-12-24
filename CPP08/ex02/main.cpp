/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:22:59 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/22 11:21:58 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main() 
{
    MutantStack<int> mutantStack;

    mutantStack.push(7);
    mutantStack.push(1);
    mutantStack.push(2);
    mutantStack.push(8);
    std::cout << mutantStack.top() << std::endl;
    std::cout << "MutantStack elements: ";
    for (MutantStack<int>::iterator it = mutantStack.begin(); it != mutantStack.end(); ++it) 
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    MutantStack<int> m(mutantStack);
    for (MutantStack<int>::iterator itt = m.begin(); itt != m.end(); ++itt) 
    {
        std::cout << *itt << " ";
    }
    return 0;
}