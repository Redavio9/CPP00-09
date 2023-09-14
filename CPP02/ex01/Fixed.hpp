/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:34:49 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/14 10:36:13 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include<iostream>
#include <cmath>
class Fixed
{
  private:
    int fixed_point;
    static const int fractional_bits = 8;
  public:
    Fixed();
    Fixed(const int i);
    Fixed(const float nb);
    ~Fixed();
    Fixed &operator=(const Fixed &assign);
    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void );
    void setRawBits( int const raw ); 
};

#endif