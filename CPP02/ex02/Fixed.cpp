/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:13:41 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/08 10:47:51 by rarraji          ###   ########.fr       */
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

// --------------- OPERATOR + - * / ----------------------//


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

// ----------------INCREMENTATION - DECREMENTATION ---------------------//

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

const Fixed Fixed::operator++(int) 
{
    Fixed tmp = *this;
    fixed_point++;
    return (tmp);
}

const Fixed Fixed::operator--(int) 
{
    Fixed tmp = *this;
    fixed_point--;
    return (tmp);
}

// ----------------INT MAX -- INT MIN---------------------//

Fixed& Fixed::min(Fixed &fix1, Fixed &fix2)
{
	if (fix1 <= fix2)
		return (fix1);
	return (fix2);
}
Fixed& Fixed::max(Fixed &fix1, Fixed &fix2)
{
	if (fix1 >= fix2)
		return (fix1);
	return (fix2);
}
const Fixed& Fixed::min(const Fixed &fix1, const Fixed &fix2)
{
	if (fix1 <= fix2)
		return (fix1);
	return (fix2);
}
const Fixed& Fixed::max(const Fixed &fix1, const Fixed &fix2)
{
	if (fix1 >= fix2)
		return (fix1);
	return (fix2);
}