/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:01:59 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/13 09:14:22 by rarraji          ###   ########.fr       */
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
  if (grade - 1 > 150)
    throw GradeTooLowException();
  else if (grade - 1 < 1)
    throw GradeTooHighException();
  this->grade--;
}
void Bureaucrat::decrement()
{
   if (grade + 1 > 150)
    throw GradeTooLowException();
  else if (grade + 1 < 1)
    throw GradeTooHighException();
  this->grade++;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) 
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return os;
}