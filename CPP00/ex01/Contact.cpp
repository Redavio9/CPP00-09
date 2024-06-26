/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:57:28 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/20 21:02:11 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}
Contact::~Contact()
{
}

void	Contact::ft_set_name(std::string x)
{
	firstname = x;
};
void	Contact::ft_set_lastname(std::string x)
{
    lastname = x;
};
void	Contact::ft_set_phonenumber(std::string x)
{
    phonenumber = x;
};
void	Contact::ft_set_nickname(std::string x)
{
    nickname = x;
};
void	Contact::ft_set_darkestsecret(std::string x)
{
    darkestsecret = x;
};
                    // -----------------//
std::string Contact::ft_get_firstname()
{
    return(firstname);
};
std::string Contact::ft_get_lastname()
{
    return(lastname);
};
std::string Contact::ft_get_phonenumber()
{
    return(phonenumber);
};
std::string Contact::ft_get_nickname()
{
    return(nickname);
};
std::string Contact::ft_get_darkestsecret()
{
    return(darkestsecret);
};

