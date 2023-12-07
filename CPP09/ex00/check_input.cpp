
#include "BitcoinExchange.hpp"

  int checkDate(const std::string &s) 
  {
    // std::string date_split;
    // std::istringstream ss(dates);
    // int    year, month, day;
    // int idx = 0;


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

int checkValue(const std::string& str) 
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
  return 0;
}

void    checkInfo(std::string info) 
{
  std::string date;
  std::string str;
  std::istringstream formats(info);
  float    value;
  int idx = 0;

  while (std::getline(formats, str, ' ')) 
  {
    if (idx == 0) 
    {
      if (checkDate(str) == 0) 
        return;
      date = str;
    }
    if (idx == 1 && str != "|") 
    {
      std::cout << "Error: bad input  => " << info << std::endl;
      return ;
    }
    if (idx == 2) 
    {
      if (checkValue(str) == 0) 
        return ;
      value = std::strtod(str.c_str(), NULL);
      if (value > 1000) 
      {
        std::cout << "Error: too large a number." <<std::endl;
        return ;
      }
    }
    idx++;
  }

  if (idx != 3) 
  {
    std::cout << "Error: bad input => " << info << std::endl;
    return ;
  }
  // printBit(date, value);
}


void    printBit(std::string date, float n) 
{
  std::map<std::string, float>::const_iterator iter;
  float res;

  res = 0;
  iter = this->bitcoinData.find(date);
  if (iter != bitcoinData.end()) 
    res = (iter->second) * n;
  else 
  {
    iter = bitcoinData.lower_bound(date);
    if (iter == bitcoinData.begin()) 
    {
      std::cout << "Error : invalid date" << std::endl;
      return;
    }
    --iter;
    res = (iter->second) * n;
  }

//   (n == static_cast<int>(n)) ?
//     std::cout << date << " => " << static_cast<int>(n) << " = " << res << std::endl :
//     std::cout << date << " => " << n << " = " << res << std::endl;
}