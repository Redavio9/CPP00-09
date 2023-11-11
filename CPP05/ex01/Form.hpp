/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:15:51 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/11 11:37:46 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "iostream"
#include "Bureaucrat.hpp"

class Form
{
  private:
    const std::string name;
    const int grade;
    bool signe;
    const int grade_execute;
  public:
    public:
		Form();
		Form(std::string name, int grade, bool signe, int grade_execute);
		~Form();
		std::string getName() const;
		int getGrade() const;
		void increment();
		void decrement();
    void beSigned(Bureaucrat obj);
    void signForm();
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