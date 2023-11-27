/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:36:37 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/25 12:08:54 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"
#include"PresidentialPardonForm.hpp"
#include"RobotomyRequestForm.hpp"

int main()
{
  try
  {
    
  // Bureaucrat a("reda", 71);
  // // ShrubberyCreationForm b;
  // // PresidentialPardonForm c("REDAS");
  // RobotomyRequestForm d("SOLIIX");
  // std::cout << d << std::endl;
  // // a.signForm(b);
  // // a.signForm(c);
  // a.signForm(d);
  // // b.execute(a);
  // // c.execute(a);
  // d.execute(a);
  


    Bureaucrat b = Bureaucrat("bureaucrat_1", 4);
		// PresidentialPardonForm p = PresidentialPardonForm("test");
		// p.beSigned(b);
		// p.execute(b);

		RobotomyRequestForm r = RobotomyRequestForm("test2");
		// r.beSigned(b);
		// r.execute(b);

		// ShrubberyCreationForm s = ShrubberyCreationForm("test2");
		r.beSigned(b);
		r.execute(b);
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
  
}