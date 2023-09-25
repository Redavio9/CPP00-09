/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:04:15 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/25 11:14:21 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

 Weapon::Weapon() : type("default")
 {
 }
 Weapon::Weapon(std::string type)
 {
  this->type = type;
 }

 void	Weapon::set_Type(std::string	type)
 {
    this->type = type;
 }
 const std::string& Weapon::get_type()
 {
    return(this->type);
 }
 Weapon::~Weapon()
 {
   std::cout << "Destructor" << std::endl;
 }