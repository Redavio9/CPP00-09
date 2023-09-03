/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:56:43 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/03 10:37:27 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed()
{
  this->fixed_point = 0;
};

int Fixed::getRawBits( void )
{
 return(this->fixed_point);
}
void Fixed::setRawBits( int const raw )
{
  this->fixed_point = raw;
}