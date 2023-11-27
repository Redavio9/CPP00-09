/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:36:48 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/24 15:13:02 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : Form("default", 72, 45)
{ 
}
RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form(name, 72, 45)
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