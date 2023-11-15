/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:01:59 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/15 11:02:15 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : name("default name"), grade(50) 
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade  < 1)
		throw GradeTooHighException();
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
Bureaucrat::Bureaucrat(Bureaucrat const &obj) : name(obj.getName())
{
	*this = obj;
}
Bureaucrat Bureaucrat::operator=(Bureaucrat const &obj)
{
	if(this != &obj)
		this->grade = obj.getGrade();
	return(*this);
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
