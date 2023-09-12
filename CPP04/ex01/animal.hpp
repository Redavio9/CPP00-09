/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:04:52 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/12 10:06:16 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include<iostream>

class Animal
{
  private:
    std::string type;
  public:
    Animal();
    Animal(std::string type);
    ~Animal();
    virtual void makeSound(); 
};

#endif