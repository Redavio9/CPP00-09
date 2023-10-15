/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:07:06 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/15 11:29:50 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MateriaSource.hpp"

MateriaSource::MateriaSource() 
{
  for (size_t i = 0; i < 4; i++)
  {
    this->Materia[i] = NULL;
  }
  this->name = "Default";
  // std::cout << this->name << "Default MateriaSource constructor\n";
}
MateriaSource::MateriaSource(std::string const &name) : name(name)
{
  for (size_t i = 0; i < 4; i++)
  {
    this->Materia[i] = NULL;
  }
  this->name = name;
}
MateriaSource::MateriaSource(const MateriaSource &copy)
{
  for (size_t i = 0; i < 4; i++)
  {
    this->Materia[i] = NULL;
  }
  this->name = copy.name;
}
MateriaSource &MateriaSource::operator=(const MateriaSource &assign)
{
  if (this != &assign)
  {
    for (size_t i = 0; i < 4; i++)
    {
      this->Materia[i] = NULL;
    }
  }
    this->name = assign.name;
  return(*this);  
}

// const std::string &MateriaSource::getName() const
// {
//   return(this->name);
// }

MateriaSource::~MateriaSource()
{
  // std::cout << this->name << "Destructor MateriaSource\n";
}
void MateriaSource::learnMateria(AMateria* m)
{
  size_t i = 0;
  for (i = 0; i < 4; i++)
  {
    if(this->Materia[i] == NULL)
      break ;
  }
  if (i < 4)
    this->Materia[i] = m;
  else
    std::cout << "ERROR !!" << std::endl;
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
  for (size_t i = 0; i < 4 ; i++)
  {
     std::cout << Materia[i]->getType() << std::endl;
    if(Materia[i]->getType() == type)
    {
      printf("reda");
      return(Materia[i]->clone());  
    }
  }
  return (NULL);
}