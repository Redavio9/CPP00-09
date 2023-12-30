/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:58:50 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/30 10:42:11 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe_copy.hpp"

int main(int ac, char **av)
{
  if(ac == 2)
  {
    clock_t vec_start = clock();
		vec_start = clock() - vec_start;


    PermegeMe A(av[1]);  
    A.parse();
		std::cout << "Time to process a range of " << ac - 1 << " element with std::vector : " << (float)vec_start * 1000 / CLOCKS_PER_SEC << " ms" << std::endl;
    // A.dump();
    // A.merge();
  }
}       