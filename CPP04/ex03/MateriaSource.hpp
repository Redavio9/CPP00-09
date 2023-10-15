/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:08:31 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/14 12:55:42 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include<iostream>
#include"AMateria.hpp"
#include"IMateriaSource.hpp"
class AMateria;

class MateriaSource : public IMateriaSource
{
  private:
    std::string name;
    AMateria *Materia[4];
  public:
    MateriaSource();
    MateriaSource(std::string const & type);
    MateriaSource(const MateriaSource &copy);
    MateriaSource &operator=(const MateriaSource &assign);
    ~MateriaSource();
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};

#endif