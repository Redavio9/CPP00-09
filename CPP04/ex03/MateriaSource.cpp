/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:07:06 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/16 12:58:01 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MateriaSource.hpp"

MateriaSource::MateriaSource() 
{
  for (size_t i = 0; i < 4; i++)
  {
    this->tmp[i] = NULL;
    this->Materia[i] = NULL;
  }
  this->name = "Default";
  // std::cout << this->name << "Default MateriaSource constructor\n";
}
MateriaSource::MateriaSource(std::string const &name) : name(name)
{
  for (size_t i = 0; i < 4; i++)
  {
    this->tmp[i] = NULL;
    this->Materia[i] = NULL;
  }
  this->name = name;
}
MateriaSource::MateriaSource(const MateriaSource &copy)
{
  for (size_t i = 0; i < 4; i++)
  {
    this->tmp[i] = NULL;
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
      if(assign.tmp[i])
      {
        delete this->tmp[i];
        this->tmp[i] = assign.tmp[i]->clone();
      }
      if(assign.Materia[i])
      {
        delete this->Materia[i];
        this->Materia[i] = assign.Materia[i]->clone();
      }
    }
    this->name = assign.name;
  }
  return(*this);  
}

MateriaSource::~MateriaSource()
{
  for (size_t i = 0; i < 4; i++)
  {
    delete this->Materia[i];
    delete this->tmp[i];
  }
  
  // std::cout << this->name << "Destructor MateriaSource\n";
}
void MateriaSource::learnMateria(AMateria* m)
{
  size_t i = 0;
  // for (int j = 0; j < 4 && tmp[i]; j++)
  // {
  //   delete tmp[i];
  // }
  for (i = 0; i < 4; i++)
  {
    if(this->Materia[i] == NULL)
      break ;
  }
  if (i < 4)
  {
    delete Materia[i];
    this->Materia[i] = m;
    // delete m;
  }
  else
  {
    std::cout << "ERROR !!" << std::endl;
    delete m;
  }
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
  for (size_t i = 0; i < 4 ; i++)
  {
    if(Materia[i]->getType() == type)
      return(Materia[i]->clone());  
  }
  return (NULL);
}