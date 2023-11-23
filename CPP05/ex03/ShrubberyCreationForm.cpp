/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:36:58 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/23 09:59:31 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : Form("default", 145, 137)
{
  std::cout << "Default constractor ShrubberyCreationForm Called !!" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form(name, 145, 137)
{
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj) : Form("default", 145, 137)
{
	*this = obj;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
	(void) obj;
	return(*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
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
  // (void) executor;
  // std::cout << "heere\n";
}
