/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:02:06 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/23 09:51:45 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"


int main()
{
  try 
  {
    Form b;
    Bureaucrat a("reda", 150);
    a.signForm(b);
  } 
  catch (std::exception &e) 
  {
    std::cout << e.what() << std::endl;
  }
}