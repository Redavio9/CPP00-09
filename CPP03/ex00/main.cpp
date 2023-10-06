/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:45:41 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/06 10:54:23 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main()
{
  ClapTrap obj("Sollix");

  obj.attack("reda");
  obj.beRepaired(9);
  obj.takeDamage(3);
}