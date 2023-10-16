/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:30:10 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/16 13:10:22 by rarraji          ###   ########.fr       */
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
      if (assign.tmp[i])
      {
        delete this->tmp[i];
        this->tmp[i] = assign.tmp[i]->clone();
      }
      if (assign.inventory[i])
      {
        delete this->inventory[i];
        this->inventory[i] = assign.inventory[i]->clone();;
      }  
    }
    this->name = assign.name;
  }
  return(*this);  
}

const std::string &Character::getName() const
{
  return(this->name);
}

Character::~Character()
{
  for (size_t i = 0; i < 4; i++)
  {
    delete this->inventory[i];
    delete this->tmp[i];
  }
}
void Character::equip(AMateria* m)
{
  size_t i = 0;
  
  for (int j = 0; j < 4 && tmp[j]; j++)
  {
    delete tmp[j];
  }
  for (i = 0; i < 4; i++)
  {
    if(this->inventory[i] == NULL)
      break ;
  }
  if (i < 4)
    this->inventory[i] = m;
  else
  {
    std::cout << "ERROR !!" << std::endl;
    delete m;
  }
    
}
void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "wrong idx number" << std::endl;
		return ;
	}
  for (size_t i = 0; i < 4; i++)
  {
    if (this->inventory[i])
    {
      this->tmp[i] = this->inventory[i];
      this->inventory[i] = NULL;
    }
  }
}
void Character::use(int idx, ICharacter& target)
{
  if (idx >= 0 && idx < 4 && this->inventory[idx])
      this->inventory[idx]->use(target);
    
}







