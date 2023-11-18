/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:02:06 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/18 11:59:34 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Intern.hpp"

int main()
{
  try 
  {
    Intern b;
    Bureaucrat a("reda", -1);
    a.signForm();
  } 
  catch (std::exception &e) 
  {
    std::cout << e.what() << std::endl;
  }
}