/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:58:18 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/15 11:25:58 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"intern.hpp"

Intern::Intern()
{
}
Intern::Intern(const Intern &intern)
{
  *this = inter;
}
Intern::&operator=(const Intern &intern);
{
}

AForm *Intern::makeForm(std::string name, std::string target)
{
  int i;

  i = 0;
  std::string *forms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
  while(i < 3)
  {
    if(forms[i] == name)
      break;
    i++;  
  }
  switch(i)
  {
    //you chold print message somthing like : Intern creates <form>, befor return the derived class object
    case 0 :
      return new ShrubberyCreationForm();
    case 1 :
      return new RobotomyRequestForm();
    case 2 :
      return new PresidentialPardonForm();
    default :
      std::cout << "ERROR !" << std::endl;  
    break;  
  }
  return(NULL);
}
