/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:36:48 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/18 10:57:13 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : AForm("default", 72, 45)
{ 
}
RobotomyRequestForm::RobotomyRequestForm(std::string name) : AForm(name, 72, 45)
{
}
RobotomyRequestForm::~RobotomyRequestForm()
{
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj)
{
	*this = obj;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
	(void) obj;
	return(*this);
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
  if(this->getSigne() && (executor.getGrade() <= this->getGrade()))
  {
        // Générer un nombre aléatoire entre 0 et 1
        std::srand(std::time(0)); 
        int success = std::rand() % 2;
        if (success) 
        {
            std::cout << "La robotomisation de " << this->getName() << " a réussi !\n";
        } else 
        {
            std::cout << "La robotomisation de " << this->getName() << " a échoué.\n";
        }
    }
    else 
        throw RobotomyRequestForm::GradeTooLowException();
}