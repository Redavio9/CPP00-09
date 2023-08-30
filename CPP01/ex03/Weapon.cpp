/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:04:15 by rarraji           #+#    #+#             */
/*   Updated: 2023/08/30 19:06:59 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

void Weapon::setType(std::string x)
{
    type = x;
}
std::string Weapon::getType(void)
{
  return(type);
}