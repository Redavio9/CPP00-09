/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:05:05 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/09 10:33:38 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

Rpn::Rpn()
{
};
Rpn::Rpn(char *av)
{
	this->stringArgv = av;
};

Rpn::Rpn(const Rpn &ref)
{
	*this = ref;
};
Rpn &Rpn::operator=(const Rpn obj)
{
	(void)obj;
	return (*this);
};

Rpn::~Rpn(){};

int Rpn::calculate(std::string s)
{
	double nb1;
	double nb2;
	double res;
	size_t i;
	std::string tab[4] = {"+", "-", "/", "*"};

	nb1 = rpn.top();
	// std::cout << "HEREeeeee\n";
	rpn.pop();
	nb2 = rpn.top();
	rpn.pop();
	for (i = 0; i < 4; i++)
	{
		if (tab[i].compare(s.c_str()) == 0)
			break;
	}
	switch (i)
	{
	case 0:
		return res = nb1 + nb2;
		break;
	case 1:
		return res = nb1 - nb2;
		break;
	case 2:
		return res = nb1 / nb2;
		break;
	case 3:
		return res = nb1 * nb2;
		break;
	default:
		break;
	}
	return (-99999);
}

int Rpn::isOperator(const char *op)
{
	std::string tmp = op;
	double res;
	// std::cout << "!!" << tmp[0] << std::endl;
	if ((tmp[0] == '+' || tmp[0] == '-' || tmp[0] == '*' || tmp[0] == '/') && tmp.length() == 1)
	{
		if(rpn.size() <= 1)
		{
			std::cout << "ERROR !!" << std::endl;
			return(-1);
		}
		res = calculate(tmp);
		// std::cout << res << std::endl;
		if(res != -99999)
		{
			rpn.push(res);
			return(0);
		}
		else	
			return(-1);	
	}
	else if(tmp.length() > 1)
	{
			std::cout << "ERROR !!" << std::endl;
			return(-1);
	}	
	else
		return(1);
	return(1);
}

bool Rpn::isOperator(const std::string& str)
{
	std::string	ops = "+-*/";
	if (str.length() == 1 && ops.find(str) != std::string::npos)
		return true;
	return false;
}

// void	Rpn::fromArgsToStack(const std::string& args)
// {
// 	std::istringstream split(stringArgv);
// 	std::string					word;
// 	double 							op, n;

// 	while (split)
// 	{
// 		split >> word;
// 		op = isOperator(word);
// 		if (op != Rpn::ERR) {
// 			rpn.push(op);
// 			continue;
// 		}
// 		n = parseNumber(word);
		
// 		if (n == Rpn::ERR)
// 			//error;
// 		rpn.push(n);
// 	}
// }

// void	Rpn::dump()
// {
// 	double m;
// 	while (rpn.size())
// 	{
// 		m = rpn.top();
// 		rpn.pop();
// 		if (m == Rpn::ADD)
// 			std::cout << "+";
// 		else if (m == Rpn::SUB)
// 			std::cout << "-";
// 		else if (m == Rpn::MUL)
// 			std::cout << "*";
// 		else if (m == Rpn::DIV)
// 			std::cout << "/";
// 		else
// 			std::cout << static_cast<int>(m);
// 		std::cout << " ";
// 	}
// }

double Rpn::size()
{
	return(this->rpn.size());
}


void Rpn::splitNum()
{
	std::string Str;
	double nb;
	int res;
	int cnt = 0;
	// std::cout << stringArgv << std::endl;
	std::istringstream split(stringArgv);
	while (split)
	{
		cnt++;
		split >> Str;
		if (!split)
			break;
		std::cout << "{" << Str << "}" << std::endl;
		res = isOperator(Str.c_str());
		if(res == -1)
			return;	
		if(res == 0)
		{
			std::cout << rpn.top() << std::endl;
			std::cout << rpn.size() << std::endl;
			std::cout << "*-----------------------------------------" << std::endl;
			// split >> Str;
			continue ;
		}
		else
		{
			nb = strtod(Str.c_str(), NULL);
			rpn.push(nb);
			std::cout << rpn.top() << std::endl;
			std::cout << rpn.size() << std::endl;
			std::cout << "-----------------------------------------" << std::endl;
		}
	}
	// std::cout << "cnt : " << cnt;
}
