
#include "BitcoinExchange.hpp"



int checkDateInput(const std::string &s) 
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

// int checkValueInput(const std::string& str) 
// {
// 	double value = std::strtod(str.c_str(), NULL);
// 	if ((value == 0.0 && !std::isdigit(str[0])) || str.find('.', 0) == 0) 
// 	{
// 		std::cout << "Error: not a Number" << std::endl;
// 		return 0;
// 	}
// 	if (value < 0) 
// 	{
// 		std::cout << "Error: not a positive number." << std::endl;
// 		return 0;
// 	}
// 	if (str.length() > 10 ||  value > 2147483647)
// 	{
// 		std::cout << "Error: too large a number."<< std::endl;
// 		return 0;
// 	}
// 	return 0;
// }

int checkValueInput(const std::string& s) 
{
	double value = std::strtod(s.c_str(), NULL);
	if (value == 0.0 && !std::isdigit(s[0])) 
		return 0;
	if (value < 0 || value > 1000) 
		return 0;
	return 1;
}



int check(std::string str, std::string date, float value)
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
				return;
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
				return ;
			value = std::strtod(str1.c_str(), NULL);
			if (value > 1000) 
			{
				std::cout << "Error: too large a number." <<std::endl;
				return ;
			}
      cnt++;
		}
	}
	if (cnt != 3) 
	{
		std::cout << "Error: bad input => "<< std::endl;
		return ;
	}
  return (1);
}


void   checkInfoInput() 
{
	std::string date;
	float    value;
	int idx = 0;
  int cnt = 0;

	std::fstream fs;
	std::string str;

	fs.open("file.txt");
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
    std::cout << "{" << str << "}"<< std::endl;
    if(check(str, date, value) == 0)
      return;
  }
}
int main()
{
  checkInfoInput();
}
