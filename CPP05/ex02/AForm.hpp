/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:15:51 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/26 15:09:05 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP


#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
  private:
    const std::string name;
    const int grade;
    const int grade_execute;
    bool signe;
  public:
		AForm();
		AForm(std::string name, int grade_sign, int grade_execution);
		virtual ~AForm();
		AForm(AForm const &obj);
		AForm& operator=(AForm const &obj);
		
		std::string getName() const;
		int getGrade() const;
		bool getSigne() const;
		int getGrade_execute() const;
		
    void beSigned(Bureaucrat& obj);
		virtual void execute(Bureaucrat const & executor) const = 0;
		
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

std::ostream &operator<<(std::ostream &out, const AForm& obj);

#endif