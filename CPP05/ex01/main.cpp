/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:02:06 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/17 10:06:45 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"


int main()
{
  try 
  {
    Form b;
    Bureaucrat a("reda", 2);
    b.beSigned(a);
  } 
  catch (std::exception &e) 
  {
    std::cout << e.what() << std::endl;
  }
  // std::cout << b << std::endl;
}