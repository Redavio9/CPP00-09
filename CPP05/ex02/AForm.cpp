/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:15:45 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/13 09:56:17 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


AForm::AForm()
{
}
AForm::AForm(std::string name) : name(name)
{
}
std::string AForm::getName() const
{
  return(this->name);
}

int AForm::getGrade() const
{
  return(this->grade);
}

bool AForm::getSigne() const
{
  return(this->signe);
}

AForm::~AForm()
{
}

void AForm::beSigned(Bureaucrat obj)
{
  if (obj.getGrade() < this->grade)
    throw GradeTooLowException();
  this->signe = true;  
}


std::ostream& operator<<(std::ostream& os, const AForm& obj) 
{
    os << obj.getName() << ", Form grade " << obj.getGrade() << ".";
    return os;
}