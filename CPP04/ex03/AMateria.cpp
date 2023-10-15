/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 10:13:13 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/14 13:20:21 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"

AMateria::AMateria()
{
  // std::cout << this->type << "Default AMateria constructor\n";
}
AMateria::AMateria(std::string const &type) : type(type)
{
}
AMateria::AMateria(const AMateria &copy)
{
  this->type = copy.type;
}
AMateria &AMateria::operator=(const AMateria &assign)
{
  if (this != &assign)
    this->type = assign.type;
  return(*this);  
}

const std::string &AMateria::getType() const
{
  return(this->type);
}

AMateria::~AMateria()
{
  // std::cout << this->type << "Destructor AMateria\n";
}

void AMateria::use(ICharacter& target)
{
  (void)target;
}