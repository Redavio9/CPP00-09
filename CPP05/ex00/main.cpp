/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:02:06 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/13 09:14:56 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"


int main()
{
  Bureaucrat a("reda", 1);
  
  Bureaucrat b("reda", 150); 
  try 
  {
    a.increment();
  } 
  catch (std::exception &e) 
  {
    std::cout << e.what() << std::endl;
  }
  std::cout << a.getGrade() << std::endl;
}