/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:19:05 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/23 21:51:53 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"



int main()
{
  Zombie *obj;
  std::string name = "reda";

  obj = zombieHorde(4, name);
  for (int i = 0; i < 4; i++)
  {
        obj[i].announce();
  }
  delete []obj;
}
