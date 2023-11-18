/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:36:43 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/18 10:57:54 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : AForm("default", 25, 5)
{ 
}
PresidentialPardonForm::PresidentialPardonForm(std::string name) : AForm(name, 25, 5)
{
}
PresidentialPardonForm::~PresidentialPardonForm()
{
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj)
{
	*this = obj;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
	(void) obj;
	return(*this);
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
  if(this->getSigne() && (executor.getGrade() <= this->getGrade()))
  {
    std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox .\n";
  }
	else 
    throw PresidentialPardonForm::GradeTooLowException();
}

