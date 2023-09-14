/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:35:51 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/14 11:15:00 by rarraji          ###   ########.fr       */
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