/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 08:12:30 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/27 11:31:30 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
  if (ac == 2)
  {
    BitcoinExchange Btc;
    Btc.checkCsvFile();
    Btc.checkInfoInput(av[1]);
  }
  return (0);
}