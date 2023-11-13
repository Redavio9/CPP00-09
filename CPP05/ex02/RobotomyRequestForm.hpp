/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:36:51 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/13 10:09:20 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYREQUESTFORM_HPP
# define SHRUBBERYREQUESTFORM_HPP


#include "iostream"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm
{
  private:
    const std::string name;
  public:
    public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string name);
		~RobotomyRequestForm();
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