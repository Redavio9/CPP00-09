/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:15:51 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/26 15:08:31 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP 

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
  private:
    const std::string name;
    const int grade;
    bool signe;
    const int grade_execute;
  public:
		Form();
		~Form();
		Form(Form const &obj);
		Form operator=(Form const &obj);
		
		std::string getName() const;
		int getGrade() const;
		bool getSigne() const;
		int getExecGrade() const;
		
		Form(std::string name, int grade, int grade_execute);
    void beSigned(Bureaucrat & obj);
		
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


std::ostream &operator<<(std::ostream &out, const Form& obj);

#endif