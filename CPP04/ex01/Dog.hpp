/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:05:02 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/12 10:06:43 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include"animal.hpp"

class Dog:public Animal
{
  private:
    std::string type;
  public:
    Dog();
    Dog(std::string type);
    ~Dog();
    void makeSound(); 
};

#endif