/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:04:15 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/23 22:18:51 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

 Weapon::Weapon(std::string type)
 {
  this->type = type;
 }

 const std::string& Weapon::get_type()
 {
    return(this->type);
 }
 void	Weapon::set_Type(std::string	type)
 {
    this->type = type;
 }
 Weapon::~Weapon()
 {
   std::cout << "Destructor called" << std::endl;
 }