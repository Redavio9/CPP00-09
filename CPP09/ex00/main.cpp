/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 09:54:48 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/04 14:53:14 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


int validateDate(std::string s) 
{
  std::string date_split;
  std::istringstream ss(s);
  int    year, month, day;
  int idx = 0;

  if (s.length() != 10) 
    return 0;
  while (std::getline(ss, date_split, '-')) 
  {
    std::cout << date_split << std::endl;
    // if (idx == 0) 
    // {
    //   std::istringstream(date_split) >> year;
    //   if (year < 1000 || year > 9999) 
    //     return 0;
    // } 
    // else if (idx == 1) 
    // {
    //   std::istringstream(date_split) >> month;
    //   if (month < 1 || month > 12) return 0;
    // } 
    // else if (idx == 2) 
    // {
    //   std::istringstream(date_split) >> day;
    //   if (day < 1 || day > 31) return 0;
    //   if (day == 31 && (month == 4 || month == 6 || month == 9 || month == 11)) return 0;
    //   if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) 
    //   {
    //     if (day > 29 && month == 2) return 0;
    //   } 
    //   else if (day > 28 && month == 2) return 0;
    // }
    // idx++;
  }

  // if (idx != 3) return 0;
  return 1;
}

int main()
{
  std::ifstream csv("data.csv");
  std::string read;
  int date_size;
  float value;

  if (!csv) 
  {
    std::cout << "Error: could not open database file" << std::endl;
    // throw Error();
  }
  if (std::getline(csv, read).eof()) 
  {
    std::cout << "Error: file empty." << std::endl;
    // throw Error();
  }
  while(std::getline(csv, read)) 
  {
    if (read != "date,exchange_rate") 
    {
      // std::cout << read << std::endl;
      date_size = read.find(',');
      if (validateDate(read.substr(0, date_size)) == 0) 
      {
        std::cout << "Error: include invalid date." << std::endl;
        // throw Error();
      }
    //   if (validateInput(read.substr(date_size + 1, read.length())) == 0) 
    //   {
    //     std::cout << "Error: include invalid value." << std::endl;
    //     throw Error();
    //   }
    //   std::istringstream(read.substr(date_size + 1, read.length())) >> value;
    //   bitcoinData[read.substr(0, date_size)] = value;
    // }
    }
  }
  return(0);
}
  