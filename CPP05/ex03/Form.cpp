/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:15:45 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/11 22:43:47 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form() : grade(2), grade_execute(1)
{
}
Form::Form(std::string name, int grade, bool signe, int grade_execute) : name(name), grade(grade), signe(false) , grade_execute(grade_execute)
{
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
}


std::ostream& operator<<(std::ostream& os, const Form& obj) 
{
    os << obj.getName() << ", Form grade " << obj.getGrade() << ".";
    return os;
}