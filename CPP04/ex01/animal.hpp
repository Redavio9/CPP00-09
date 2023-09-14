/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:04:52 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/14 11:10:44 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include<iostream>
#include"Brain.hpp"

class Animal
{
  protected:
    std::string type;
  public:
    Animal();
    Animal(std::string type);
    Animal(const Animal &copy);
    Animal &operator=(const Animal &assign);
    virtual ~Animal();
    virtual void makeSound(); 
};

#endif