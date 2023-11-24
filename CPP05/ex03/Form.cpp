/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:15:45 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/18 14:52:53 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Default") , grade(5) , grade_execute(4), signe(false)
{
//    if (grade > 150 || grade_execute > 150)
// 		throw GradeTooLowException();
// 	else if (grade  < 1 || grade_execute < 1)
// 		throw GradeTooHighException();
}
// Form::Form(std::string name) : name(name) , grade(5), grade_execute(4), signe(false)
// {
  
//   if (grade > 150 || grade_execute > 150)
// 		throw GradeTooLowException();
// 	else if (grade  < 1 || grade_execute < 1)
// 		throw GradeTooHighException();
// }

Form::Form(std::string name, int grade_sign, int grade_execution): name(name), grade(grade_sign), grade_execute(grade_execution), signe(false) 
{ 
  if (grade > 150 || grade_execute > 150)
		throw GradeTooLowException();
	else if (grade  < 1 || grade_execute < 1)
		throw GradeTooHighException();
}

Form::~Form()
{
}

Form::Form(Form const &obj) : name(obj.getName()) , grade(obj.getGrade()) , grade_execute(obj.getGrade_execute())
{
	*this = obj;
}
Form& Form::operator=(Form const &obj)
{
	if(this != &obj)
    this->signe = obj.signe; 
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
int Form::getGrade_execute() const
{
  return(this->grade_execute);
}

bool Form::getSigne() const
{
  return(this->signe);
}

void Form::beSigned(Bureaucrat& obj)
{
  if (obj.getGrade() < this->grade)
    throw GradeTooLowException();
  this->signe = true;
}


std::ostream& operator<<(std::ostream& os, const Form& obj) 
{
  os << "FORM_NAME : " << obj.getName() << "\n";
  os << "Form_grade " << obj.getGrade() << "\n";
  os << "Form_SIGNE " << obj.getSigne() << "\n";
  os << "Form_EXECUTGRADE " << obj.getGrade_execute() << "\n";
  return os;
}
