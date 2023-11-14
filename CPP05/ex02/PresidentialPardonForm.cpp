/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:36:43 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/14 10:58:10 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : AForm()
{ 
}
PresidentialPardonForm::PresidentialPardonForm(std::string name) : AForm(name, 145, 5)
{
}
PresidentialPardonForm::~PresidentialPardonForm()
{
}
void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
  if(this->getSigne() && (executor.getGrade() > this->getGrade()))
  {
    std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox .\n";
  }
}

