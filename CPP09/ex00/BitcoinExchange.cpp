/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 09:54:53 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/04 14:42:23 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
  std::cout <<  "Default BitcoinExchange constructor\n";
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
  
}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &assign)
{
    
}

BitcoinExchange::~BitcoinExchange()
{
  std::cout << "BitcoinExchange Destructor\n";
}

const char *BitcoinExchange::Error::what() const throw() 
{
	return "Grade too high";
}




void BitcoinExchange::checkCsvFile() 
{
  std::ifstream csv("data.csv");
  std::string read;
  int date_size;
  float value;

  if (!csv) 
  {
    std::cout << "Error: could not open database file" << std::endl;
    throw Error();
  }
  if (std::getline(csv, read).eof()) 
  {
    std::cout << "Error: file empty." << std::endl;
    throw Error();
  }
  while(std::getline(csv, read)) 
  {
    if (read != "date,exchange_rate") 
    {
      std::cout << read << std::endl;
    //   date_size = read.find(',');
    //   if (validateDate(read.substr(0, date_size)) == 0) 
    //   {
    //     std::cout << "Error: include invalid date." << std::endl;
    //     throw Error();
    //   }
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
}