/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:19:05 by rarraji           #+#    #+#             */
/*   Updated: 2023/08/30 14:50:49 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"



int main()
{
  Zombie *obj;
  std::string name = "reda";

  obj = zombieHorde(4, name);
 for (int i = 0; i < 4; i++) {
        obj[i].announce();
    }
  delete []obj;
}