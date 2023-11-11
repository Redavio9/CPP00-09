/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:36:57 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/09 13:43:26 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

int main()
{
  ClapTrap *obj = new ScavTrap("Sollix");

  obj->attack("reda");
  obj->beRepaired(9);
  obj->takeDamage(3);
  delete(obj);
}