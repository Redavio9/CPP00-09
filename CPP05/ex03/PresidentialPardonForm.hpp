/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:36:46 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/15 09:23:21 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP


#include "iostream"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
  public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string name);
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const & obj);
		PresidentialPardonForm operator=(PresidentialPardonForm const & obj);
		void execute(Bureaucrat const & executor);
		class GradeTooHighException : public std::exception 
    {
			public:
				const char *what() const throw() 
        {
					return "Grade too high";
				}
		};
		class GradeTooLowException : public std::exception 
    {
			public:
			const char *what() const throw() 
      {
				return "Grade too low";
			}
		};
};
                                                                                                
# endif