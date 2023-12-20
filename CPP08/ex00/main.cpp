/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:29:41 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/20 10:46:32 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() 
{
  std::vector<int> myvector;
  myvector.push_back(1);
  myvector.push_back(2);
  myvector.push_back(9);
  myvector.push_back(10);
  myvector.push_back(5);
  try 
  {
   int result = easyFind(myvector, 10);
   std::cout << result << std::endl;
  } 
  catch (const char* msg) 
  {
   std::cerr << "ERROR : " << msg << std::endl;
  }
  return 0;
}
