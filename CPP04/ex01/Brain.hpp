/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:09:07 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/13 12:25:26 by rarraji          ###   ########.fr       */
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