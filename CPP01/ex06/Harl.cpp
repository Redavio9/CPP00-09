/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:41:01 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/25 11:45:45 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
  std::cout << "Default constructor\n";  
}
Harl::~Harl()
{
  std::cout << "Destructor\n";  
}

void Harl::debug(void)
{
  std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
  std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void)
{
  std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(void)
{
  std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void Harl::complain(std::string level) 
{
    int flag = 0;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*funcptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int j = 0; j < 4; j++) {
        if (levels[j] == level) 
        {
            flag = 1;
            switch(j) 
            {
                case 0:
                    (this->*funcptr[0])();
                case 1:
                    (this->*funcptr[1])();
                case 2:
                    (this->*funcptr[2])();
                case 3:
                    (this->*funcptr[3])();
            }
            break;
        }
    }
}
