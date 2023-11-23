/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:16:51 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/23 15:19:17 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

/*
 * This function applies to each element of array (given its length) the passed
 * function.
 */
template <typename T>
void iter(T* array, size_t lenght, void (*func)(T& thing))
{
	for (size_t i = 0; i < lenght; i++)
		func(array[i]);
}

#endif
