/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:13:08 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/13 12:34:46 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"
#include"Cat.hpp"

int main()
{
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