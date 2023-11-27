/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:02:06 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/25 11:18:22 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

int main()
{
  try 
  {
    Bureaucrat a("reda", 1);
    Bureaucrat b("reda", 150); 
    a.increment();
    std::cout << a.getGrade() << std::endl;
  } 
  catch (std::exception &e) 
  {
    std::cout << e.what() << std::endl;
  }
}