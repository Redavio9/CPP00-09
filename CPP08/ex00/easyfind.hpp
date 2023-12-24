/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:29:37 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/21 17:53:01 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>


template <typename T>
int easyFind(T &vec , int value) 
{
   if (std::find(vec.begin(), vec.end(), value) != vec.end()) 
        return value;
   throw "value is not in this container";
}

# endif