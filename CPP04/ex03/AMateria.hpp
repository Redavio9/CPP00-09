/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 10:13:14 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/14 11:26:37 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include<iostream>
#include"ICharacter.hpp"

class AMateria
{
  protected:
    std::string type;
  public:
    AMateria();
    AMateria(std::string const & type);
    AMateria(const AMateria &copy);
    AMateria &operator=(const AMateria &assign);
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    virtual ~AMateria();
};

#endif