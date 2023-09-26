/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:41:03 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/26 09:59:08 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include<iostream>

class Harl
{   
  public:
    Harl();
    ~Harl();
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    void complain( std::string level );
};

# endif