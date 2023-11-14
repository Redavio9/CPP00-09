/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:15:45 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/14 13:04:48 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("Default") , grade(5) , grade_execute(4)
{
}
AForm::AForm(std::string name) : name(name) , grade(5), grade_execute(4)
{
}

AForm::AForm(const std::string name, int grade_sign, int grade_execution): name(name), grade(grade_sign), grade_execute(grade_execution), signe(false) {}
std::string AForm::getName() const
{
  return(this->name);
}
Aform::~Aform()
{
}

Aform::Aform(Aform const &obj)
{
	*this = obj;
}
Aform::operator=(Aform const &obj)
{
	if(this != obj)
	{
		obj->name = this->name;
		obj->grade = this->grade;
		obj->grade_execute = this->grade_execute;
    obj->signe = this->signe;
	}
	return(*this);
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
