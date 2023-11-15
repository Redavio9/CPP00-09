/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:15:45 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/15 12:18:21 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("Default") , grade(5) , grade_execute(4)
{
   if (grade > 150 || grade_execute > 150)
		throw GradeTooLowException();
	else if (grade  < 1 || grade_execute < 1)
		throw GradeTooHighException();
}
AForm::AForm(std::string name) : name(name) , grade(5), grade_execute(4)
{
  if (grade > 150 || grade_execute > 150)
		throw GradeTooLowException();
	else if (grade  < 1 || grade_execute < 1)
		throw GradeTooHighException();
}

AForm::AForm(const std::string name, int grade_sign, int grade_execution): name(name), grade(grade_sign), grade_execute(grade_execution), signe(false) 
{
}

Aform::~Aform()
{
}

AForm::AForm(AForm const &obj) : name(obj->getName()) , grade(obj->getGrade()) , grade_execute(obj->getExecGrade())
{
	*this = obj;
}
AForm::operator=(AForm const &obj)
{
	if(this != obj)
    this.sign = obj->getSigne(); 
	return(*this);
}


std::string AForm::getName() const
{
  return(this->name);
}

int AForm::getGrade() const
{
  return(this->grade);
}
int AForm::getGrade_execute() const
{
  return(this->grade_execute);
}

bool AForm::getSigne() const
{
  return(this->signe);
}

void AForm::beSigned(Bureaucrat obj)
{
  if (obj.getGrade() < this->grade)
    throw GradeTooLowException();
  this->signe = true;  
}


std::ostream& operator<<(std::ostream& os, const AForm& obj) 
{
  os << "FORM_NAME : " << obj.getName() << "\n";
  os << "Form_grade " << obj.getGrade() << "\n";
  os << "Form_SIGNE " << obj.getSigne() << "\n";
  os << "Form_EXECUTGRADE " << obj.getExecGrade() << "\n";
  return os;
}
