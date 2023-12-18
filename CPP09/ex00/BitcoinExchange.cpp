/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 09:54:53 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/07 14:49:55 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"BitcoinExchange.hpp"

//----------------------------------------------------------------------------------------------//
																					// O-C-F //
//----------------------------------------------------------------------------------------------//

BitcoinExchange::BitcoinExchange()
{
	std::cout <<  "Default BitcoinExchange constructor\n";
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	(void)copy;
}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &assign)
{
		(void)assign;
		return(*this);
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << "BitcoinExchange Destructor\n";
}

//----------------------------------------------------------------------------------------------//
																					// CsvFile //
//----------------------------------------------------------------------------------------------//

void BitcoinExchange::checkCsvFile() 
{
	std::ifstream csv("data.csv");
	std::string read;
	int size;
	float value;

	if (!csv) 
	{
		std::cout << "Error: could not open database file" << std::endl;
		return;
	}
	if (std::getline(csv, read).eof()) 
	{
		std::cout << "Error: file empty." << std::endl;
		return;
	}
	while(std::getline(csv, read)) 
	{
		if (read != "date,exchange_rate") 
		{
			size = read.find(',');
			if (validDate_csv(read.substr(0, size)) == 0) 
			{
				std::cout << "Error: include invalid date." << std::endl;
				return;
			}
			if (checkValue_csv(read.substr(size + 1, read.length())) == 0) 
			{
				std::cout << "Error: include invalid value." << std::endl;
				return;
			}
			std::istringstream(read.substr(size + 1, read.length())) >> value;
			this->bitcoinData[read.substr(0, size)] = value;
		}
	}
	csv.close();
	return;
}

int BitcoinExchange::validDate_csv(std::string s) 
{
	std::string date_split;
	std::istringstream ss(s);
	int	year;
	int	month;
	int	day;
	int idx = 0;
	int cnt = 0;

	if (s.length() != 10) 
		return 0;
	while (std::getline(ss, date_split , '-')) 
	{
		if (idx == 0) 
		{
			std::istringstream(date_split) >> year;
			if (year < 1000 || year > 9999) 
				return 0;
			idx = 1;
			cnt++;
			continue;
		}
		if (idx == 1) 
		{
			std::istringstream(date_split) >> month;
			if (month < 1 || month > 12) 
				return 0;
			idx = 2;
			cnt++;
			continue;
		} 
		if (idx == 2) 
		{
			std::istringstream(date_split) >> day;
			if (day < 1 || day > 31) 
				return 0;
			cnt++;
			continue;  
		} 
		if (day == 31 && (month == 4 || month == 6 || month == 9 || month == 11))
				return 0;
		else if (day > 29 && month == 2) 
			return 0;
	}
	if (cnt != 3) 
		return 0;
	return 1;
}

int BitcoinExchange::checkValue_csv(std::string s) 
{
	double value = std::strtod(s.c_str(), NULL);
	if (value == 0.0 && !std::isdigit(s[0]))
		return 0;
	if (value < 0) 
		return 0;
	return 1;
}


//----------------------------------------------------------------------------------------------//
																					// InputFile //
//----------------------------------------------------------------------------------------------//

int BitcoinExchange::checkDateInput(const std::string &s) 
	{
		std::string date_split;
		std::istringstream ss(s);
		int	year;
		int	month;
		int	day;
		int idx = 0;
		int cnt = 0;

		if (s.find('-', s.length()) != std::string::npos) 
		{
			std::cout << "Error: incorrect date formate => " << s << std::endl;
			return 0;
		}
		while (std::getline(ss, date_split , '-')) 
		{
			if (idx == 0) 
			{
				std::istringstream(date_split) >> year;
				if (year < 1000 || year > 9999)
					return 0;
				idx = 1;
				cnt++;
				continue;
			}
			if (idx == 1) 
			{
				std::istringstream(date_split) >> month;
				if (month < 1 || month > 12) 
					return 0;
				idx = 2;
				cnt++;
				continue;
			} 
			if (idx == 2) 
			{
				std::istringstream(date_split) >> day;
				if (day < 1 || day > 31)
					return 0;
				cnt++;
				continue;  
			} 
			if (day == 31 && (month == 4 || month == 6 || month == 9 || month == 11))
					return 0;
			else if (day > 29 && month == 2) 
				return 0;
		}
		if (cnt != 3) 
			return 0;
		return 1;
}

int BitcoinExchange::checkValueInput(const std::string& str) 
{
	double value = std::strtod(str.c_str(), NULL);
	if ((value == 0.0 && !std::isdigit(str[0])) || str.find('.', 0) == 0) 
	{
		std::cout << "Error: not a Number" << std::endl;
		return 0;
	}
	if (value < 0) 
	{
		std::cout << "Error: not a positive number." << std::endl;
		return 0;
	}
	if (str.length() > 10 ||  value > 2147483647)
	{
		std::cout << "Error: too large a number."<< std::endl;
		return 0;
	}
	return 1;
}


int BitcoinExchange::check(std::string str, std::string date, float value)
{
  int idx =0;
  int cnt =0;
  std::string str1;
  std::istringstream ss(str);
	
  while (std::getline(ss, str1, ' ')) 
	{
    if (idx == 0) 
		{
      if (checkDateInput(str) == 0)
			{
				std::cout << "here1\n";
				return (0);
			}
			idx = 1;
			cnt++;
      date = str1;
			continue;
		}
		if (idx == 1 && str1 == "|") 
		{
			// std::cout << "Error: bad input  => " << std::endl;
			// return ;
      idx = 2;
			cnt++;
			continue;
		}
		if (idx == 2) 
		{
			if (checkValueInput(str1) == 0) 
				return (0);
			value = std::strtod(str1.c_str(), NULL);
			if (value > 1000) 
			{
				std::cout << "Error: too large a number." <<std::endl;
				return (0);
			}
      cnt++;
		}
	}
	if (cnt != 3) 
	{
		std::cout << "Error: bad input => "<< std::endl;
			return (0);
	}
	printBit(date, value);
  return (1);
}


void   BitcoinExchange::checkInfoInput() 
{
	std::string date;
	std::string date1;
	float    value;

	std::fstream fs;
	std::string str;

	fs.open("file.txt");
	value = 0.0;
	if(!fs.is_open()) 
	{
		std::cout << "Error : could not open file." << std::endl;
		return;
	}
	if (std::getline(fs, str).eof()) 
	{
		std::cout << "Error : File empty or no data in." << std::endl;
		return;
	}
	if(str.compare("date | value") != 0) 
	{
		std::cout << "Error : File format error." << std::endl;
		return;
	}
	str.erase();
	while (std::getline(fs, str))
	{
		if(check(str, date, value) == 0)
			return;
  }
}

void	BitcoinExchange::printBit(std::string date, float n) 
{
	std::map<std::string, float>::const_iterator iter;
	float res;

	res = 0;
	iter = bitcoinData.find(date);
	if (iter != bitcoinData.end()) 
    res = this->bitcoinData[date] * n;
  else 
  {
    iter = bitcoinData.lower_bound(date);
		std::cout << iter->second << std::endl;
    if (iter == bitcoinData.begin()) 
    {
      std::cout << "Error : invalid date" << std::endl;
      return;
    }
    --iter;
    res = (iter->second) * n;
  }
	std::cout << date << " => " << n << " = " << res << std::endl;
}
//   (n == static_cast<int>(n)) ?
//     std::cout << date << " => " << static_cast<int>(n) << " = " << res << std::endl :
//     std::cout << date << " => " << n << " = " << res << std::endl;
// }