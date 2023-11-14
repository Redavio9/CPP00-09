/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:36:48 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/14 13:07:39 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : AForm()
{ 
}
RobotomyRequestForm::RobotomyRequestForm(std::string name) : AForm(name, 145, 45)
{
}
RobotomyRequestForm::~RobotomyRequestForm()
{
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj)
{
	*this = obj;
}
RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
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
void RobotomyRequestForm::execute(Bureaucrat const & executor)
{
  if(this->getSigne() && (executor.getGrade() > this->getGrade()))
  {
        // Générer un nombre aléatoire entre 0 et 1
        // std::srand(std::time(0)); 
        int success = std::rand() % 2;

        if (success) 
        {
            std::cout << "La robotomisation de " << this->getName() << " a réussi !\n";
        } else 
        {
            std::cout << "La robotomisation de " << this->getName() << " a échoué.\n";
        }
    }
}