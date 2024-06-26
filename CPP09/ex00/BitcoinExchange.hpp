/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 09:54:50 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/29 11:37:29 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP


#include <iostream>
#include <map>
#include <fstream>
#include <sstream>

class BitcoinExchange 
{
  private:
    std::map<std::string, float> bitcoinData;
  public:
  
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange& ref);
    BitcoinExchange& operator=(const BitcoinExchange& ref);
    ~BitcoinExchange();

    void checkCsvFile();
    int validDate_csv(std::string s);
    int checkValue_csv(std::string s);
    int check(std::string str, std::string date, float value);
    void  checkInfoInput(std::string av);
    int checkDateInput(const std::string&);
    int checkValueInput(const std::string&);
    void printBit(std::string date, float n);
    int checkDateFiles(const std::string &s);
};


#endif