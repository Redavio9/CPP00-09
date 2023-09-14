/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:12:50 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/14 12:54:39 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP


#include"iostream"

class Aanimal
{
  protected:
    std::string type;
  public:
    Aanimal();
    Aanimal(std::string type);
    virtual ~Aanimal();
    Aanimal(const Aanimal &copy);
    Aanimal &operator=(const Aanimal &assign);
    virtual void makeSound() = 0;
};


# endif

