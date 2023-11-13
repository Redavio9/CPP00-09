/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:36:54 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/13 10:04:09 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP


#include "iostream"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm
{
  private:
    const std::string name;
  public:
    public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string name);
		~ShrubberyCreationForm();
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