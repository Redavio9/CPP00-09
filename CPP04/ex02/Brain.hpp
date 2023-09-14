/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:12:56 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/14 13:23:40 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include"animal.hpp"

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