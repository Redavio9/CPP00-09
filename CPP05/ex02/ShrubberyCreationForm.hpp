/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:36:54 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/13 11:28:33 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP


#include "iostream"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
  private:
		const std::string name;
		const int grade;
		const int grade_execute;
  public:
    public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string name);
		~ShrubberyCreationForm();
		std::string getName() const;
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