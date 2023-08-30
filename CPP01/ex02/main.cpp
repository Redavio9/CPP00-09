/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:23:39 by rarraji           #+#    #+#             */
/*   Updated: 2023/08/30 15:41:17 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>


int main()
{
  std::string str = "HI THIS IS BRAIN";
  std::string *stringPTR;
  stringPTR = &str;
  std::string &stringREF = str;
  
  std::cout << &str << std::endl;
  std::cout << stringPTR << std::endl;
  std::cout << &stringREF << std::endl;

  std::cout << str << std::endl;
  std::cout << *stringPTR << std::endl;
  std::cout << stringREF << std::endl;
}