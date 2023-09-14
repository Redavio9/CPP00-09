/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:46:08 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/14 11:17:08 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include"animal.hpp"

class Cat:public Animal
{
  public:
    Cat();
    Cat(std::string type);
    Cat &operator=(const Cat &assign);
    Cat(const Cat &copy);
    ~Cat();
    void makeSound(); 
};

#endif