/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:41:04 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/25 11:57:05 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main(int ac, char **av)
{
  std::string name;
  std::string levles[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  if(ac == 2)
  {
    name = av[1];
    for(int i = 0; i < 4; i++)
    {
      if(name == levles[i])
        break;
      if(i == 3)
      {
        std::cout << "LEVEL DONT EXICT !!!" << std::endl;
        return(0);
      }
    }
    Harl obj;
    obj.complain(name);
  }
  else
    std::cout << "LEVEL DONT EXICT !!!" << std::endl;
  return(0); 
}

