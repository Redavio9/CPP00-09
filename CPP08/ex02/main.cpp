/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:22:59 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/29 11:11:11 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main() 
{
    MutantStack<int> mutantStack;

    mutantStack.push(1);
    mutantStack.push(2);
    mutantStack.push(8);
    mutantStack.push(7);
    std::cout << mutantStack.top() << std::endl;
    std::cout << "MutantStack elements: ";
    for (MutantStack<int>::const_iterator it = mutantStack.begin(); it != mutantStack.end(); ++it) 
    {
        std::cout << *it << " ";
    }
    return 0;
}