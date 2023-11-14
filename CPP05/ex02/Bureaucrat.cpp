/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:01:59 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/14 13:05:04 by rarraji          ###   ########.fr       */
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
Bureaucrat::Bureaucrat(Bureaucrat const &obj)
{
	*this = obj;
}
Bureaucrat::operator=(Bureaucrat const &obj)
{
	if(this != obj)
	{
		obj->name = this->name;
		obj->grade = this->grade;
	}
	return(*this);
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

void Bureaucrat::signForm(AForm &obj)
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