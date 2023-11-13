/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:36:58 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/13 11:40:11 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : name("Default") , grade(145), grade_execute(137)
{ 
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : name(name), grade(145), grade_execute(137)
{
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
  if(this->getSigne() && executor.getGrade() > this->getGrade())
  {
    std::fstream file;
    std::string name_file = this->getName() + "_Shrubbery";
    std::string contents = 	"                           %                         %            \n\
      @@@     %    @@     @@@@                                  *       \n\
          @@ %     @  %   @   %          %               ;      ***      \n\
          @@    @      @                               #     *****     \n\
      @@@   @@@@@  @@@@@@___    %         %           {###}  *******\n\
          @-@  @   @      @@@@       %               <## ####>********\n\
        @@@@@   @ @         @@@@@               %      {###}***********\n\
          %  @  @@ /@@@@@                          <###########> *******\n\
              @-@@@@    V     %          %           {#######}******* ***\n\
        %       @@      v        { }             <###############>*******\n\
                @@               {^^,               {## ######}***** ****\n\
        %      @@     %          (   `-;       <###################> ****\n\
              @@           _     `;;~~           {#############}********\n\
              @@   %      /(______);        <################  #####>***\n\
        %     @@@        (         (           {##################}*****\n\
                @@@        |:------( )     <##########################>**\n\
      @@@@     @@@      _//        \\        {###   ##############}*****\n\
      @@@@@@@  @@@@@    / /@@@@@@@@@ vv  <##############################>\n\
      @@@@@@@ @@@@@@@ @@@@@@@@@@@@@@@@@@@       @@@@@@  @@@@@@@  @@@@\n\
      @@@@@@###@@@@@### @@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
      @@@@@@@@###@##@@ @@@@@@@@@@@@@@@@@@@@@ @@@@@   @@@@@@@@@@@@@@@@@@@\n\
      @@@@@@@@@@@### @@@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@@@@@@@\n\
      -@@@@@@@@@#####@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";   
    file.open(name_file, std::ios::in | std::ios::out);
    if(file.is_open())
      std::cout << "EROOR !" << std::endl;
    else
      file << contents;
  }
  
  // file.close();
}

std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm& obj) 
{
    os << obj.getName() << ", ShrubberyCreationForm grade " << obj.getGrade() << ".";
    return os;
}
