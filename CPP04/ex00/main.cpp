/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:52:03 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/13 12:21:01 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"
#include"Cat.hpp"


int main()
{
  Animal a;
  Animal *b = new(Dog);
  Animal *c = new(Cat);
  b->makeSound();
  c->makeSound();
  delete b;
  delete c;
//   Animal s;
// std::cout << sizeof(s);
return 0;
}