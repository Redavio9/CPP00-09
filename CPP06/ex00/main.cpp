/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:34:25 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/22 11:57:08 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

int main(int ac, char **av)
{
  int check_double = 0;
  if(ac == 2)
    ScalarConverte::Converte(av[1]);
  return (0);  
}