/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:56:37 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/04 10:31:56 by rarraji          ###   ########.fr       */
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
    Fixed &operator=(const Fixed &assign);
};



#endif