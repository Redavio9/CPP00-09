/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 08:47:16 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/26 22:08:03 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void fn()
{
  Zombie *mainZ;
  randomChump("Solix");
  mainZ = newZombie("Youssef");
  mainZ->announce();
  delete mainZ;
}

int main()
{
  fn();
}