/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:16:47 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/07 10:09:53 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T min(const T a, const T b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T Max(const T a, const T b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif
