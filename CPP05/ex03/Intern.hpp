/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:58:21 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/26 15:16:18 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"

class Form;


class Intern
{
	public:
			Intern();
			Intern(const Intern &intern);
			Intern &operator=(const Intern &intern);
			Form *makeForm(std::string name, std::string target);
			~Intern();
};




# endif