/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:56:37 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/04 10:27:24 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include<iostream>

class Fixed
{
  private:
    int fixed_point;
    static const int fractional_bits = 8;
  public:
    Fixed();
    Fixed(const Fixed &copy);
    ~Fixed();
    Fixed &operator=(const Fixed &assign);
    void setRawBits(int raw); 
    int getRawBits( void ) const;
};



#endif