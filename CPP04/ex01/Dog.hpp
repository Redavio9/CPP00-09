/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:05:02 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/14 10:13:18 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include"animal.hpp"
#include"Brain.hpp"


class Dog:public Animal
{
  private:
    Brain* brain;
  public:
    Dog();
    Dog(std::string type);
    ~Dog();
    void makeSound(); 
};

#endif