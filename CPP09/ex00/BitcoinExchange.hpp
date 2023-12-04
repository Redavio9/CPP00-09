/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 09:54:50 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/04 14:36:24 by rarraji          ###   ########.fr       */
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
    // void play(char *file);
    int validateDate(std::string s);
    int validateInput(std::string s);
    void checkCsvFile();
    void checkInputFile(char *file);
    void bitcoin(char *file);
    void checkInfo(std::string);
    int checkDate(const std::string&);
    int checkValue(const std::string&);
    void printBit(std::string date, float n);
    class Error : public std::exception {
      public:
        const char* what() const throw();
    };
};


#endif