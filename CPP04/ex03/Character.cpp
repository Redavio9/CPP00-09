/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:30:10 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/15 19:00:15 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Character.hpp"

Character::Character() 
{
  for (size_t i = 0; i < 4; i++)
  {
    this->tmp[i] = NULL;
    this->inventory[i] = NULL;
  }
  this->name = "Default";
  // std::cout << this->name << "Default Character constructor\n";
}
Character::Character(std::string const &name) : name(name)
{
  for (size_t i = 0; i < 4; i++)
  {
    this->tmp[i] = NULL;
    this->inventory[i] = NULL;
  }
  this->name = name;
}
Character::Character(const Character &copy)
{
  for (size_t i = 0; i < 4; i++)
  {
    this->tmp[i] = NULL;
    this->inventory[i] = NULL;
  }
  this->name = copy.name;
}
Character &Character::operator=(const Character &assign)
{
  if (this != &assign)
  {
    for (size_t i = 0; i < 4; i++)
    {
      this->tmp[i] = NULL;
      this->inventory[i] = NULL;
    }
  }
  this->name = assign.name;
  return(*this);  
}

const std::string &Character::getName() const
{
  return(this->name);
}

Character::~Character()
{
  // std::cout << this->name << "Destructor Character\n";
}
void Character::equip(AMateria* m)
{
  size_t i = 0;
  
  for (i = 0; i < 4; i++)
  {
    if(this->inventory[i] == NULL)
      break ;
  }
  if (i < 4)
    this->inventory[i] = m;
  else
    std::cout << "ERROR !!" << std::endl;
}
void Character::unequip(int idx)
{
  for (size_t i = 0; i < 4; i++)
  {
    if (this->inventory[i])
      this->inventory[i] = NULL;
  }
}
void Character::use(int idx, ICharacter& target)
{
  if (idx >= 0 && idx < 4 && this->inventory[idx])
      this->inventory[idx]->use(target);
    
}







