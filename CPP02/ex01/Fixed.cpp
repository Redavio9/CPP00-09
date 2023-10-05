/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:37:12 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/04 11:12:40 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed() : fixed_point(0)
{
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i) : fixed_point(i * pow(2, Fixed::fractional_bits))
{
  std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb)
{
  this->fixed_point = roundf(nb * pow(2, Fixed::fractional_bits));
  std::cout << "Float constructor called" << std::endl;
}

int Fixed::getRawBits( void )
{
 return(this->fixed_point);
}

void Fixed::setRawBits( int const raw )
{
  this->fixed_point = raw; 
}

Fixed::Fixed(const Fixed &copy)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = copy;
}

Fixed &Fixed::operator=(const Fixed &assign)
{
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &assign)
    this->fixed_point = assign.fixed_point;
  return(*this);
}
  
Fixed::~Fixed()
{
  std::cout << "Destructor called" << std::endl;
};

float Fixed::toFloat( void ) const
{
  return((float)fixed_point / pow(2, Fixed::fractional_bits));
}

int Fixed::toInt( void ) const
{
  return(fixed_point / pow(2, Fixed::fractional_bits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) 
{
    out << fixed.toFloat();
    return out;
}