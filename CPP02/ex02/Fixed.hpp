/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:44:58 by rarraji           #+#    #+#             */
/*   Updated: 2023/10/02 13:23:16 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP


#include<iostream>
#include <cmath>

class Fixed
{
private:
    int fixed_point;
    static const int fractional_bits = 8;

public:
    Fixed();
    Fixed(const Fixed &copy);
    ~Fixed();
    Fixed(const int i);
    Fixed(const float nb);
    Fixed &operator=(const Fixed &assign);
    float toFloat( void ) const;
    int toInt( void ) const;
    bool operator>(const Fixed &c2) const;
    bool operator<(const Fixed &c2) const;
    bool operator<=(const Fixed &c2) const;
    bool operator>=(const Fixed &c2) const;
    bool operator==(const Fixed &c2) const;
    bool operator!=(const Fixed &c2) const;
    Fixed operator+(const Fixed &c2);
    Fixed operator-(const Fixed &c2);
    Fixed operator*(const Fixed &c2);
    Fixed operator/(const Fixed &c2);
    Fixed &operator++();
    const Fixed operator++(int);
    Fixed &operator--();
    const Fixed operator--(int);
    static Fixed& min(Fixed &fix1, Fixed &fix2);
    static Fixed& max(Fixed &fix1, Fixed &fix2);
    static const Fixed& min(const Fixed &fix1, const Fixed &fix2);
    static const Fixed& max(const Fixed &fix1, const Fixed &fix2);
};
    std::ostream &operator<< (std::ostream &out, const Fixed &fixed);

#endif