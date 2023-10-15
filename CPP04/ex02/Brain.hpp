/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:12:56 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/13 12:32:16 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include"Animal.hpp"


class Brain
{
  private:
    std::string ideas[100];
  public :
    Brain();
    ~Brain();
    Brain(const Brain &copy);
    Brain operator=(const Brain &assign);
};




#endif