/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:36:51 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/18 10:51:30 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYREQUESTFORM_HPP
# define SHRUBBERYREQUESTFORM_HPP


#include "iostream"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm
{

    public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string name);
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const & obj);
		RobotomyRequestForm &operator=(RobotomyRequestForm const & obj);
		void execute(Bureaucrat const & executor) const;
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