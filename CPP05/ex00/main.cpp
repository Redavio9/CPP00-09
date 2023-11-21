/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:02:06 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/21 20:36:01 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"


int main()
{
  try 
  {
    Bureaucrat a("reda", 2);
    Bureaucrat b("reda", 149); 
    b.decrement();
    std::cout << b.getGrade() << std::endl;
  } 
  catch (std::exception &e) 
  {
    std::cout << e.what() << std::endl;
  }
}