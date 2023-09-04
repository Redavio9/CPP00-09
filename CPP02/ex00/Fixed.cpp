/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:56:43 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/04 11:39:07 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed()
{
  this->fixed_point = 0;
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
