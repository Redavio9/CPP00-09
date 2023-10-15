/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:13:01 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/13 12:32:33 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include"Animal.hpp"
#include"Brain.hpp"


class Cat:public Animal
{
  private:
    Brain* brain;
  public:
    Cat();
    Cat(std::string type);
    Cat &operator=(const Cat &assign);
    Cat(const Cat &copy);
    ~Cat();
    void makeSound();
};

#endif