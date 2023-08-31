/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:04:15 by rarraji           #+#    #+#             */
/*   Updated: 2023/08/31 13:01:46 by rarraji          ###   ########.fr       */
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
 }