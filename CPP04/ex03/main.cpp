/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 08:49:28 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/17 15:52:48 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"
#include"Character.hpp"
#include"MateriaSource.hpp"
#include"Cure.hpp"
#include"Ice.hpp"


void test1()
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
}


void	test2()
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
}


void	test3()
{
	Character c;
	Character c2(c);
	c2.equip(new Ice);
	c2 = c;
}

void	test4()
{
	Character *c = new Character();
	Cure *cure = new Cure();

	c->equip(cure);
	c->unequip(0);

	delete c;
}

void	test5()
{
	AMateria *a = NULL;
	Character *c = new Character;

	c->equip(a);
	c->equip(a);
	c->equip(a);
	c->equip(a);
	c->unequip(0);
	c->unequip(1);
	c->unequip(2);
	c->unequip(3);
	c->unequip(4);
	c->equip(a);
	delete c;
}

void	test6()
{
	AMateria *a = new Ice;
	Character *c = new Character;

	c->equip(a);
	c->unequip(0);
	c->equip(a);
	c->unequip(1);
	c->equip(a);
	c->unequip(2);
	c->equip(a);
	c->unequip(3);
	c->unequip(4);
	c->equip(a);
	delete c;
}

void	test7()
{
	Character a("a");
	a.equip(new Cure());
	a.equip(new Ice());
	a.equip(new Cure());
	a.equip(new Ice());
	
	a.use(0, a);
	a.use(1, a);
	a.use(2, a);
	a.use(3, a);
	
	Character b("b");

	b = a;

	b.use(0, b);
	b.use(1, b);
	b.use(2, b);
	b.use(3, b);
}

void test8()
{
	Character a("a");
	
	a.equip(new Cure());
	a.equip(new Ice());
	a.equip(new Cure());
	a.equip(new Ice());
	
	a.use(0, a);
	a.use(1, a);
	a.use(2, a);
	a.use(3, a);
	
	Character b("b");
	b.equip(new Cure());
	b.equip(new Ice());

	a = b;

	b.use(0, b);
	b.use(1, b);
}

void	test9()
{
    ICharacter *i = new Character("bob");
    
    i->equip(new Cure());
    i->equip(new Ice());
    i->equip(new Cure());
    i->equip(new Ice());
    
    i->unequip(1);
    i->use(1, *i);
    
    i->unequip(0);
	delete i;
}

void	test10()
{
	Character a("a");
	a.equip(new Cure());
	a.equip(new Ice());
	a.equip(new Cure());
	a.equip(new Ice());
	
	a.use(0, a);
	a.use(1, a);
	a.use(2, a);
	a.use(3, a);
	
	Character b("b");

	b = a;

	b.use(0, b);
	b.use(1, b);
	b.use(2, b);
	b.use(3, b);
}

int main()
{
	std::cout << "--------- test 1 ----------" << std::endl;
	test1();
	std::cout << "--------- test 2 ----------" << std::endl;
	test2();
	std::cout << "--------- test 3 ----------" << std::endl;
	test3();
	std::cout << "--------- test 4 ----------" << std::endl;
	test4();
	std::cout << "--------- test 5 ----------" << std::endl;
	test5();
	std::cout << "--------- test 6 ----------" << std::endl;
	test7();
	std::cout << "--------- test 7 ----------" << std::endl;
	test8();
	std::cout << "--------- test 8 ----------" << std::endl;
	test9();
	std::cout << "--------- test 9 ----------" << std::endl;
	test10();
	std::cout << "--------- test 10 LEAKS ----------" << std::endl;
	system("leaks -q prg");
	return 0;
}