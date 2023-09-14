/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:09:07 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/14 08:51:47 by rarraji          ###   ########.fr       */
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
};




#endif