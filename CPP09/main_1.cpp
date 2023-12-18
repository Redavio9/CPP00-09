/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_1.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 09:54:48 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/06 11:20:47 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"



void checkInputFile(char *file) 
{
  std::fstream fs;
  std::string str;

  fs.open(file);
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
  // fs.close();
}





int checkValue_csv(std::string s) 
{
	double value = std::strtod(s.c_str(), NULL);
	if (value == 0.0 && !std::isdigit(s[0])) 
		return 0;
	if (value < 0 || value > 1000) 
		return 0;
	return 1;
}



int validDate_csv(std::string s) 
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
			// std::cout << "year : " << year << std::endl;
			if (year < 1000 || year > 9999) 
				return 0;
			idx = 1;
			cnt++;
			continue;
		}
		if (idx == 1) 
		{
			std::istringstream(date_split) >> month;
			// std::cout << "month : " << month << std::endl;
			if (month < 1 || month > 12) 
				return 0;
			idx = 2;
			cnt++;
			continue;
		} 
		if (idx == 2) 
		{
			std::istringstream(date_split) >> day;
			// std::cout << "day : " << day << std::endl;
			if (day < 1 || day > 31) 
				return 0;
			cnt++;
			continue;  
			// std::cout << "--------------------------------------\n"; 
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

int main()
{
	std::map<std::string, float> bitcoinData;
	std::ifstream csv("data.csv");
	std::string read;
	int size;
	float value;

	if (!csv) 
	{
		std::cout << "Error: could not open database file" << std::endl;
		return(0);
	}
	if (std::getline(csv, read).eof()) 
	{
		std::cout << "Error: file empty." << std::endl;
		return (0);
	}
	while(std::getline(csv, read)) 
	{
		if (read != "date,exchange_rate") 
		{
			size = read.find(',');
			if (validDate_csv(read.substr(0, size)) == 0) 
			{
				std::cout << "Error: include invalid date." << std::endl;
				return(0);
			}
			if (checkValue_csv(read.substr(size + 1, read.length())) == 0) 
			{
				std::cout << "Error: include invalid value." << std::endl;
				return(0);
			}
		  std::istringstream(read.substr(size + 1, read.length())) >> value;
		  bitcoinData[read.substr(0, size)] = value;
			std::cout << value << std::endl;
		}
	}
	return(0);
}
	