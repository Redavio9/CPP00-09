/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:16:51 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/07 09:35:55 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void increment(T& something)
{
	something++;
}


template <typename T, typename Tf>
void iter(T* array, int len, void (*func)(Tf& thing))
{
	for (int i = 0; i < len; i++)
		func(array[i]);
}


#endif

