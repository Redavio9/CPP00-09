/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:36:58 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/14 10:27:40 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : AForm()
{ 
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : AForm(name, 145, 137)
{
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
  if(this->getSigne() && (executor.getGrade() > this->getGrade()))
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
}
