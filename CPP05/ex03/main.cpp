/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:02:06 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/24 11:38:25 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Intern.hpp"

int main1()
{
  try 
  {
    Bureaucrat a("reda", -9);
    Intern someRandomIntern;
    Form* rrf;
    // a.signForm(*rrf);
    rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
    // delete rrf;
  }
 
  catch (std::exception &e) 
  {
    std::cout << e.what() << std::endl;
  }
  return(0);
}