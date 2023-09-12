/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:04:57 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/12 10:06:24 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include"animal.hpp"

class Cat:public Animal
{
  private:
    std::string type;
  public:
    Cat();
    Cat(std::string type);
    ~Cat();
    void makeSound(); 
};

#endif