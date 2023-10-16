/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:17:30 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/16 10:17:55 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include"WrongAnimal.hpp"

class WrongCat:public WrongAnimal
{
  public:
    WrongCat();
    WrongCat(std::string type);
    WrongCat &operator=(const WrongCat &assign);
    WrongCat(const WrongCat &copy);
    ~WrongCat();
    void makeSound(); 
};

#endif