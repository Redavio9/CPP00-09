/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 08:12:30 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/07 10:53:39 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main()
{
  BitcoinExchange Btc;
  Btc.checkCsvFile();
  // Btc.printBtc("2013-12-07");
  Btc.checkInfoInput();
}