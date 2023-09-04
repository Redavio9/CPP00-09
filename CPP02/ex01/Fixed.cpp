/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:37:12 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/04 15:11:54 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed()
{
  this->fixed_point = 0;
}
Fixed::Fixed(const int i)
{
  this->fixed_point = i;
}
Fixed::Fixed(const float nb)
{
  this->fixed_point = this->fixed_point * (2 * 256);
}
float Fixed::toFloat( void ) const
{
  float new_float;
  new_float = this->fixed_point * (2 / 256);
  return(new_float);
}
int Fixed::toInt( void ) const
{
  float new_float;
  new_float = this->fixed_point * (2 / 256);
  return(std::roundf(new_float));
}
Fixed::Fixed(const Fixed &copy)
{
  this->fixed_point = copy.fixed_point;
}
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
  this->fixed_point = assign.fixed_point;
  return(*this);
}
  
 Fixed::~Fixed(){};