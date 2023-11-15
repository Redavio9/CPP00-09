/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:15:45 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/15 12:17:44 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form() : name("Default") , grade(1), signe(false), grade_execute(1)
{
  if (grade > 150 || grade_execute > 150)
		throw GradeTooLowException();
	else if (grade  < 1 || grade_execute < 1)
		throw GradeTooHighException();
}
Form::Form(std::string name, int grade, bool signe, int grade_execute) : name(name), grade(grade), signe(signe) , grade_execute(grade_execute)
{
  if (grade > 150 || grade_execute > 150)
		throw GradeTooLowException();
	else if (grade  < 1 || grade_execute < 1)
		throw GradeTooHighException();
}
Form::~Form()
{
}
Form::Form(Form const &obj) : name(obj.getName()) , grade(obj.getGrade()) , grade_execute(obj.getExecGrade())
{
	*this = obj;
}
Form Form::operator=(Form const &obj) 
{
	 if (this != &obj) 
      signe = obj.getSigne();
	return(*this);
}
std::string Form::getName() const
{
  return(this->name);
}

int Form::getGrade() const
{
  return(this->grade);
}

int Form::getExecGrade() const
{
  return this->grade_execute;
}

bool Form::getSigne() const
{
  return(this->signe);
}


void Form::beSigned(Bureaucrat obj)
{
  if (obj.getGrade() > this->grade)
    throw GradeTooLowException();
  this->signe = true;  
}

std::ostream& operator<<(std::ostream& os, const Form& obj) 
{
    os << "FORM_NAME : " << obj.getName() << "\n";
    os << "Form_grade " << obj.getGrade() << "\n";
    os << "Form_SIGNE " << obj.getSigne() << "\n";
    os << "Form_EXECUTGRADE " << obj.getExecGrade() << "\n";
    return os;
}
