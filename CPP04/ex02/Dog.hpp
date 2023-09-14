/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:13:06 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/14 12:59:33 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include"animal.hpp"
#include"Brain.hpp"


class Dog:public Aanimal
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