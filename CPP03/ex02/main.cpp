/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:44:43 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/09 13:45:02 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"


int main()
{
  ClapTrap *obj = new FragTrap("Sollix");

  obj->attack("reda");
  obj->beRepaired(9);
  obj->takeDamage(3);
  delete(obj);
}