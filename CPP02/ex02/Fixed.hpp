/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:44:58 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/06 12:54:52 by rarraji          ###   ########.fr       */
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
    bool operator!=(const Fixed &c2) const;
    bool operator!=(const Fixed &c2) const;
    bool operator!=(const Fixed &c2) const;
};

#endif