/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:50:11 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/14 10:10:56 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include"animal.hpp"

class Dog:public Animal
{
  public:
    Dog();
    Dog(std::string type);
    ~Dog();
    void makeSound(); 
};

#endif