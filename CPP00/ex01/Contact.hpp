/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hp <hp@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:57:28 by rarraji           #+#    #+#             */
/*   Updated: 2023/09/19 12:18:42 by hp               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>

class Contact
{
    private:
        std::string firstname;
        std::string lastname;
        std::string phonenumber;
        std::string nickname;
        std::string darkestsecret;
    public :
        Contact();
        ~Contact();
        void ft_set_name(std::string x);
        void ft_set_lastname(std::string x);
        void ft_set_phonenumber(std::string x);
        void ft_set_nickname(std::string x);
        void ft_set_darkestsecret(std::string x);
        std::string ft_get_firstname();
        std::string ft_get_lastname();
        std::string ft_get_phonenumber();
        std::string ft_get_nickname();
        std::string ft_get_darkestsecret();
};

# endif
