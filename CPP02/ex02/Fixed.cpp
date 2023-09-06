/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:13:41 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/06 13:11:54 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

bool Fixed::operator>(const Fixed &c2) const
{
    return this->fixed_point > c2.fixed_point;
}

bool Fixed::operator<(const Fixed &c2) const
{
    return this->fixed_point < c2.fixed_point;
}

bool Fixed::operator<=(const Fixed &c2) const
{
    return this->fixed_point <= c2.fixed_point;
}

bool Fixed::operator>=(const Fixed &c2) const
{
    return this->fixed_point >= c2.fixed_point;
}

bool Fixed::operator==(const Fixed &c2) const
{
    return this->fixed_point == c2.fixed_point;
}

// -------------------------------------//


Fixed Fixed::operator+(Fixed &c2)
{
  Fixed C3;
  if (this != &c2)
    
  return(*this);
}
bool Fixed::operator!=(const Fixed &c2) const
{
    return this->fixed_point != c2.fixed_point;
}
bool Fixed::operator!=(const Fixed &c2) const
{
    return this->fixed_point != c2.fixed_point;
}
bool Fixed::operator!=(const Fixed &c2) const
{
    return this->fixed_point != c2.fixed_point;
}
