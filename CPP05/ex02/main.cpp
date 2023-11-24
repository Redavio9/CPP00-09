/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:36:37 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/18 14:55:23 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"
#include"PresidentialPardonForm.hpp"
#include"RobotomyRequestForm.hpp"

int main()
{
  try
  {
    
  Bureaucrat a("reda", 1);
  ShrubberyCreationForm b;
  // PresidentialPardonForm c("REDAS");
  // RobotomyRequestForm d("SOLIIX");
  std::cout << b << std::endl;
  a.signForm(b);
  // a.signForm(c);
  // a.signForm(d);
  b.execute(a);
  // c.execute(a);
  // d.execute(a);
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
  
}