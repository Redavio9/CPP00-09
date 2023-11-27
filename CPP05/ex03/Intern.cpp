/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:58:18 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/26 15:19:02 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Intern.hpp"

Intern::Intern()
{
}
Intern::Intern(const Intern &intern)
{
  *this = intern;
}
Intern &Intern::operator=(const Intern &intern)
{
  (void)intern;
  return(*this);
}

Intern::~Intern()
{
}
Form *Intern::makeForm(std::string name, std::string target)
{
  int i;

  i = 0;
  std::string forms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
  while(i < 3)
  {
    if(forms[i] == name)
      break;
    i++;  
  }
  switch(i)
  {
    case 0 :
      return new ShrubberyCreationForm(target);
    case 1 :
      return new RobotomyRequestForm(target);
    case 2 :
      return new PresidentialPardonForm(target);
    default :
      std::cout << "ERROR !" << std::endl;  
    break;  
  }
  return(NULL);
}
