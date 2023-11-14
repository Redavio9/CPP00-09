/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:36:37 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/14 10:58:53 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"
#include"PresidentialPardonForm.hpp"
#include"RobotomyRequestForm.hpp"

int main()
{
  Bureaucrat a("reda", 150);
  ShrubberyCreationForm b;
  PresidentialPardonForm c("REDAS");
  RobotomyRequestForm d("SOLIIX");
  b.beSigned(a);
  c.beSigned(a);
  d.beSigned(a);
  b.execute(a);
  c.execute(a);
  d.execute(a);
}