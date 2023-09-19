/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hp <hp@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:43:18 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/19 12:17:45 by hp               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Contact.hpp"
#include"PhoneBook.hpp"


Phonebook::Phonebook()
{
    this->index = 0;
}
Phonebook::~Phonebook()
{
}

void Phonebook::add()
{
    std::string y;
    std::cout << "------->First Name : ";
    std::cin >> y;
    if (std::cin.eof())
    {
        std::cout << "Input cancelled" << std::endl;
        std::exit(1);
    }
    this->contact[this->index % 8].ft_set_name(y);
    std::cout << "------->Last Name : ";
    std::cin >> y;
    if (std::cin.eof())
    {
        std::cout << "Input cancelled" << std::endl;
        std::exit(1);
    }
    this->contact[this->index % 8].ft_set_lastname(y);
    std::cout << "------->Nickname : ";
    std::cin >> y;
    if (std::cin.eof())
    {
        std::cout << "Input cancelled" << std::endl;
        std::exit(1);
    }
    this->contact[this->index % 8].ft_set_phonenumber(y);
    std::cout << "------->phone number : ";
    std::cin >> y;
    if (std::cin.eof())
    {
        std::cout << "Input cancelled" << std::endl;
        std::exit(1);
    }
    this->contact[this->index % 8].ft_set_nickname(y);
    std::cout << "------->Darkestsecret : ";
    std::cin >> y;
    if (std::cin.eof())
    {
        std::cout << "Input cancelled" << std::endl;
        std::exit(1);
    }
    this->contact[this->index % 8].ft_set_darkestsecret(y);
    std::cout << std::endl;
    this->index++;
}


void Phonebook::displayPhoneBook()
{
    int cnt = 0;
    while (cnt < 8)
    {
        std::cout << "____________________________________________" << std::endl;
        std::cout << "|";
        std::cout << std::setw(10) << cnt;
        if (this->contact[cnt].ft_get_firstname().length() > 10)
            std::cout << "|" << std::setw(9) << this->contact[cnt].ft_get_firstname().substr(0, 9) << ".";
        else
            std::cout << "|" << std::setw(10) << this->contact[cnt].ft_get_firstname();   
        if (this->contact[cnt].ft_get_lastname().length() > 10)
            std::cout << "|" << std::setw(9) << this->contact[cnt].ft_get_lastname().substr(0, 9) << ".";
        else
            std::cout << "|" << std::setw(10) << this->contact[cnt].ft_get_lastname();   
        if (this->contact[cnt].ft_get_nickname().length() > 10)
            std::cout << "|" << std::setw(9) << this->contact[cnt].ft_get_nickname().substr(0, 9) << ".";
        else
            std::cout << "|" << std::setw(10) << this->contact[cnt].ft_get_nickname();
        std::cout << "|";
        std::cout << std::endl;
        cnt++;
    }
}

void Phonebook::search()
{
    int tmp;

    if (this->index == 0){
        std::cout << "The phonebook is currently empty." << std::endl;
        std::exit(1);
    }
    int input2;
    std::cout << "____________________________________________" << std::endl;
    std::cout << "|";
    std::cout << std::setw(10) << "INDEX";
    std::cout << "|";
    std::cout << std::setw(10) << "FIRSTNAME";
    std::cout << "|";
    std::cout << std::setw(10) << "LASTNAME";
    std::cout << "|";
    std::cout << std::setw(10) << "NICKNAME";
    std::cout << "|";
    std::cout << std::endl;
    displayPhoneBook();
    std::cout << "____________________________________________" << std::endl;
    std::cout << "Enter the index number : ";
    std::cin >> input2;
    if (std::cin.eof())
    {
        std::cout << "Input cancelled" << std::endl;
        std::exit(1);
    }
    if(this->index >= 8)
        tmp = 7;
    else
        tmp = this->index;
    if(input2 > tmp)
        std::cout << "INDEX NOT EXACT !!!\n";
    else
    {
        std::cout << "------->First Name : ";
        std::cout << this->contact[input2].ft_get_firstname() << std::endl;
        std::cout << "------->Last Name : ";
        std::cout << this->contact[input2].ft_get_lastname() << std::endl;;
        std::cout << "------->Nickname : ";
        std::cout << this->contact[input2].ft_get_nickname() << std::endl;;
        std::cout << "------->phone number : ";
        std::cout << this->contact[input2].ft_get_phonenumber() << std::endl;;
        std::cout << "------->Darkestsecret : ";
        std::cout << this->contact[input2].ft_get_darkestsecret() << std::endl;;
        std::cout << std::endl;
    }
}

int main()
{
    Phonebook phone;
    std::string input;

    while(true)
    {
        std::cout << "entrer the commande : ";
        std::cin >> input;
        if(input == "ADD")
           phone.add();
        else if(input == "SEARCH")
            phone.search();
        else if(input == "EXIT" || std::cin.eof())
            std::exit(1);
    }
}