/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:12:47 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/21 08:51:48 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"animal.hpp"


Aanimal::Aanimal()
{
  std::cout << "Default constructor\n";
}
Aanimal::Aanimal(std::string type)
{
  this->type = type;
}
Aanimal::~Aanimal()
{
  std::cout << " Destructor\n";
}
Aanimal &Aanimal::operator=(const Aanimal &assing)
{
  this->type = type;
}

Aanimal::Aanimal(const Aanimal &copy)
{
   this->type = copy.type;   
}
