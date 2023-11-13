/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:36:46 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/13 10:10:56 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP


#include "iostream"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm
{
  private:
    const std::string name;
  public:
    public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string name);
		~PresidentialPardonForm();
		std::string getName() const;
		virtual void execute(Bureaucrat const & executor);
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