/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:44:43 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/06 12:04:56 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"

int main()
{
  FragTrap obj("Sollix");

  obj.attack("reda");
  obj.beRepaired(9);
  obj.takeDamage(3);
}