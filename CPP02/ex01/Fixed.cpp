/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:37:12 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/06 10:09:48 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed() : fixed_point(0)
{
}

Fixed::Fixed(const int i) : fixed_point(i << Fixed::fractional_bits)
{
  this->fixed_point = i << Fixed::fractional_bits;
}

Fixed::Fixed(const float nb)
{
  this->fixed_point = nb * (1 << Fixed::fractional_bits);
}

float Fixed::toFloat( void ) const
{
  return((float)fixed_point / (1 << Fixed::fractional_bits));
}

int Fixed::toInt( void ) const
{
  return(fixed_point >> Fixed::fractional_bits);
}

// Fixed::Fixed(const Fixed &copy)
// {
//   this->fixed_point = copy.fixed_point;
// }

int Fixed::getRawBits( void )
{
 return(this->fixed_point);
}

void Fixed::setRawBits( int const raw )
{
  this->fixed_point = raw; 
}

Fixed &Fixed::operator=(const Fixed &assign)
{
  if (this != &assign)
    this->fixed_point = assign.fixed_point;
  return(*this);
}
  
Fixed::~Fixed(){};