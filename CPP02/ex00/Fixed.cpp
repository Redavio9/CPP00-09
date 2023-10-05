/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:56:43 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/04 10:27:19 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed() : fixed_point(0)
{
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = copy;
}

void Fixed::setRawBits( int const raw )
{
  this->fixed_point = raw; 
}
int Fixed::getRawBits( void ) const
{
  std::cout << "getRawBits member function called" << std::endl;
  return(this->fixed_point);
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
