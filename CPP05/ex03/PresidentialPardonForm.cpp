/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:36:43 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/23 10:00:41 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : Form("default", 25, 5)
{
  std::cout << "Default constractor PresidentialPardonForm Called !!" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(std::string name) :  Form(name, 25, 5)
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

