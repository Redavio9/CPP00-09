/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:44:58 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/07 11:34:22 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP


#include<istream>

class Fixed
{
private:
    int fixed_point;
    static const int fractional_bits = 8;

public:
    bool operator>(const Fixed &c2) const;
    bool operator<(const Fixed &c2) const;
    bool operator<=(const Fixed &c2) const;
    bool operator>=(const Fixed &c2) const;
    bool operator==(const Fixed &c2) const;
    bool operator!=(const Fixed &c2) const;
    Fixed operator+(const Fixed &c2);
    Fixed operator-(const Fixed &c2);
    Fixed Fixed::operator*(const Fixed &c2);
    Fixed Fixed::operator/(const Fixed &c2);
    Fixed &Fixed::operator++();
    Fixed &Fixed::operator--();
    
};

#endif