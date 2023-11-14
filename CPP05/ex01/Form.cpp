/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:15:45 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/14 12:58:24 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form() : grade(1), grade_execute(1), signe(false)
{
}
Form::Form(std::string name, int grade, bool signe, int grade_execute) : name(name), grade(grade), signe(false) , grade_execute(grade_execute)
{
}
Form::~Form()
{
}
Form::Form(Form const &obj)
{
	*this = obj;
}
Form::operator=(Form const &obj)
{
	if(this != obj)
	{
		obj->name = this->name;
		obj->grade = this->grade;
    obj->signe = this->sign;
    obj->grade_execute = this->grade_execute;
	}
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

bool Form::getSigne() const
{
  return(this->signe);
}

Form::~Form()
{
}

void Form::beSigned(Bureaucrat obj)
{
  if (obj.getGrade() < this->grade)
    throw GradeTooLowException();
  this->signe = true;  
}


std::ostream& operator<<(std::ostream& os, const Form& obj) 
{
    os << obj.getName() << ", Form grade " << obj.getGrade() << ".";
    return os;
}