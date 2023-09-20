/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:43:18 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/20 16:02:58 by rarraji          ###   ########.fr       */
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
std::string Phonebook::getInput( const std::string& prompt )
{
    std::string input;

    while (input.empty() && std::cin)
    {
        std::cout << prompt;
        getline(std::cin, input);
    }
    return (input);
}

void Phonebook::add()
{
    std::string y;
    y = getInput("------->First Name : ");
    if (std::cin.eof())
    {
        std::cout << "Input cancelled" << std::endl;
        exit(1);
    }
    this->contact[this->index % 8].ft_set_name(y);
    y = getInput("------->Last Name : ");
    if (std::cin.eof())
    {
        std::cout << "Input cancelled" << std::endl;
        exit(1);
    }
    this->contact[this->index % 8].ft_set_lastname(y);
    y = getInput("------->Nickname : ");
    if (std::cin.eof())
    {
        std::cout << "Input cancelled" << std::endl;
        exit(1);
    }
    this->contact[this->index % 8].ft_set_phonenumber(y);
    y = getInput("------->phone number : ");
    if (std::cin.eof())
    {
        std::cout << "Input cancelled" << std::endl;
        exit(1);
    }
    this->contact[this->index % 8].ft_set_nickname(y);
    y = getInput("------->Darkestsecret : ");
    if (std::cin.eof())
    {
        std::cout << "Input cancelled" << std::endl;
        exit(1);
    }
    this->contact[this->index % 8].ft_set_darkestsecret(y);
    std::cout << std::endl;
    this->index++;
}


void Phonebook::displayPhoneBook(int tmp)
{
    int cnt = 0;
    while (cnt < tmp)
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
    std::string input;
    int input2;

    if (this->index == 0){
        std::cout << "The phonebook is currently empty." << std::endl;
        return ;
    }
    if(this->index >= 8)
        tmp = 8;
    else
        tmp = this->index;
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
    displayPhoneBook(tmp);
    std::cout << "____________________________________________" << std::endl;
    std::cout << "Enter the index number : ";
    getline(std::cin, input);
    if (std::cin.eof())
    {
        std::cout << "Input cancelled" << std::endl;
        exit(1);
    }
    input2 = input[0] - 48;
    if (input.length() != 1 || input2 >= tmp){
        std::cout << "INDEX NOT EXACT !!!\n";
        return ;
    }
    
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

int main()
{
    Phonebook phone;
    std::string input;

    while(std::cin)
    {
        std::cout << "entrer the commande : ";
        getline(std::cin, input);
        // std::cin >> input;
        if(input == "ADD")
           phone.add();
        else if(input == "SEARCH")
            phone.search();
        else if(input == "EXIT" || std::cin.eof())
            exit(1);
    }
}