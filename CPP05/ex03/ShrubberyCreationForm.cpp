/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:36:58 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/15 11:18:02 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : AForm("default", 145, 137)
{ 
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : AForm(name, 145, 137)
{
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj)
{
	*this = obj;
}
ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
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

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
  if(this->getSigne() && (executor.getGrade() <= this->getGrade()))
  {
    std::ofstream file;
    std::string name_file = this->getName() + "_Shrubbery";
    std::string contents ="	  ,      ,      ,,   ,\n \
          ,        ,     ,\n \
    ,         *       ,   \n \
             * *   ,     ,\n \
       ,    * . *     ,\n \
           * . . *      ,\n \
     ,    * .| |. *     \n \
         ****| |****   ,\n \
             | |      , \n \
    -^-^^-^----^-^-^----^--\n";
    file.open(name_file);
    if (!file.is_open()) 
    {
      std::cout << "ERROR: File could not be opened!" << std::endl;
    }
    else 
    {
      file << contents;
      file.close();
    }
  }
  else 
    throw ShrubberyCreationForm::GradeTooLowException();
}