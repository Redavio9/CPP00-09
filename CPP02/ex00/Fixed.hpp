/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:56:37 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/03 10:34:38 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include<iostream>

class Fixed
{
  private:
    int fixed_point;
    static const int fractional_bits;
  public:
    Fixed();
    Fixed(const Fixed &copy);
    ~Fixed();
    int getRawBits( void );
    void setRawBits( int const raw ); 
};




#endif