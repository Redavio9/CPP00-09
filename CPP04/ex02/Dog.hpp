/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:13:06 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/13 12:32:55 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include"Animal.hpp"
#include"Brain.hpp"


class Dog:public Animal
{
  private:
    Brain* brain;
  public:
    Dog();
    Dog(std::string type);
    Dog &operator=(const Dog &assign);
    Dog(const Dog &copy);
    ~Dog();
    void makeSound(); 
};

#endif