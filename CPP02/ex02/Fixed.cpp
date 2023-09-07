/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:13:41 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/07 12:44:53 by rarraji          ###   ########.fr       */
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


Fixed Fixed::operator+(const Fixed &c2)
{
    Fixed c3;
    c3.fixed_point = this->fixed_point + c2.fixed_point;
    return(c3);
}
Fixed Fixed::operator-(const Fixed &c2)
{
    Fixed c3;
    c3.fixed_point = this->fixed_point - c2.fixed_point;
    return(c3);
}
Fixed Fixed::operator*(const Fixed &c2)
{
    Fixed c3;
    c3.fixed_point = this->fixed_point * c2.fixed_point;
    return(c3);
}
Fixed Fixed::operator/(const Fixed &c2)
{
    Fixed c3;
    c3.fixed_point = this->fixed_point / c2.fixed_point;
    return(c3);
}

Fixed &Fixed::operator++()
{
    fixed_point++;
    return(*this);
}
Fixed &Fixed::operator--()
{
    fixed_point--;
    return(*this);
}
