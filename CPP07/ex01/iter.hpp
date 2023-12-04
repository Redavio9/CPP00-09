/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:16:51 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/02 10:06:11 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>


template <typename T>
void iter(T* array, size_t len, void (*func)(T& thing))
{
	for (size_t i = 0; i < len; i++)
		func(array[i]);
}

#endif

