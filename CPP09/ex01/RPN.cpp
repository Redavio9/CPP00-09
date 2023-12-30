/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:05:05 by rarraji           #+#    #+#             */
/*   Updated: 2023/12/30 10:47:12 by rarraji          ###   ########.fr       */
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

Rpn::Rpn(const Rpn &obj)
{
	this->rpn = obj.rpn;
	this->stringArgv = obj.stringArgv;
}

Rpn &Rpn::operator=(const Rpn &obj)
{
	if (this == &obj)
		return (*this);
	this->rpn = obj.rpn;
	this->stringArgv = obj.stringArgv;
	return (*this);
}

Rpn::~Rpn(){};

int Rpn::calculate(std::string s)
{
	double nb1;
	double nb2;
	double res;
	size_t i;
	std::string tab[4] = {"+", "-", "/", "*"};

	nb1 = rpn.top();
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
			return res = nb2 - nb1;
			break;
		case 2:
			return res = nb2 / nb1;
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
	if ((tmp[0] == '+' || tmp[0] == '-' || tmp[0] == '*' || tmp[0] == '/') && tmp.length() == 1)
	{
		if (rpn.size() <= 1)
		{
			std::cout << "ERROR !!" << std::endl;
			return(-1);
		}
		res = calculate(tmp);
		if (res != -99999)
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
	return(1);
}

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
	std::istringstream split(stringArgv);
	while (split)
	{
		cnt++;
		split >> Str;
		if (!split)
			break;
		res = isOperator(Str.c_str());
		if(res == -1)
			return;	
		if(res == 0)
			continue ;
		else
		{
			nb = strtod(Str.c_str(), NULL);
			rpn.push(nb);
		}
	}
	if(rpn.size() == 1)
		std::cout << rpn.top() << std::endl;  
}
