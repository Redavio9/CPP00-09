/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:02:06 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/13 09:22:18 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"


int main()
{
  Bureaucrat a("reda", 2);
  Form b;
  
  try 
  {
    b.beSigned(a);
  } 
  catch (std::exception &e) 
  {
    std::cout << e.what() << std::endl;
  }
  std::cout << b.getSigne() << std::endl;
}