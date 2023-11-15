/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:15:51 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/15 12:22:38 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP


#include "iostream"
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
		AForm(const std::string name);
		AForm(const std::string name, int grade_sign, int grade_execution);
		~AForm();
		AForm(AForm const &obj);
		std::string getName() const;
		int getGrade() const;
		bool getSigne() const;
    void beSigned(Bureaucrat obj);
		int getGrade_execute() const;
		virtual void execute(Bureaucrat const & executor) = 0;
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