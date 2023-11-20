/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:01:59 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/20 09:24:41 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat()
{
}
Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
  this->grade = grade;
}
std::string Bureaucrat::getName() const
{
  return(this->name);
}

int Bureaucrat::getGrade() const
{
  return(this->grade);
}

Bureaucrat::~Bureaucrat()
{
}
void Bureaucrat::increment()
{
  this->grade--;
  if (grade > 150)
    throw Bureaucrat::GradeTooLowException();
  else if (grade < 1)
    throw Bureaucrat::GradeTooHighException();
}
void Bureaucrat::decrement()
{
  this->grade++;
   if (grade > 150)
    throw Bureaucrat::GradeTooLowException();
  else if (grade < 1)
    throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::signForm(Form &obj)
{
  if (obj.getSigne() == true)
    std::cout << obj << "signed" << this->getName();
  else
    std::cout << obj << "couldn’t sign" << this->getName() << "because";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) 
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return os;
}