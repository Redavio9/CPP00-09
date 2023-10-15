/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:30:08 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/15 18:57:29 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include<iostream>
#include"ICharacter.hpp"
#include"AMateria.hpp"



class Character : public ICharacter
{
  private:
    std::string name;
    AMateria *inventory[4];
    std::string *tmp[4];
  public:
    Character();
    Character(std::string const &name);
    Character(const Character &copy);
    Character &operator=(const Character &assign);
    ~Character();
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif