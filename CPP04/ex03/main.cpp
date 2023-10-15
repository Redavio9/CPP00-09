/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 08:49:28 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/15 11:01:05 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"
#include"Character.hpp"
#include"MateriaSource.hpp"
#include"Cure.hpp"
#include"Ice.hpp"

int main()
{
  IMateriaSource* src = new MateriaSource();
  
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());
  
  ICharacter* me = new Character("me");
  
  AMateria* tmp;
  
  tmp = src->createMateria("ice");
  me->equip(tmp);
  
  tmp = src->createMateria("cure");
  me->equip(tmp);
  
  ICharacter* bob = new Character("bob");
  
  me->use(0, *bob);
  me->use(1, *bob);
  
  delete bob;
  delete me;
  delete src;
  return(0);
}