/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:02:06 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/20 09:53:17 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Intern.hpp"

int main()
{
  try 
  {
    Bureaucrat a("reda", 1);
    Intern someRandomIntern;
    Form* rrf;
    // a.signForm(*rrf);
    rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
  }
 
  catch (std::exception &e) 
  {
    std::cout << e.what() << std::endl;
  }
}