/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:15:51 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/18 14:52:49 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP


#include "iostream"
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
  private:
    const std::string name;
    const int grade;
    const int grade_execute;
    bool signe;
  public:
		Form();
		// Form(const std::string name);
		Form(std::string name, int grade_sign, int grade_execution);
		virtual ~Form();
		Form(Form const &obj);
		Form& operator=(Form const &obj);
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


std::ostream &operator<<(std::ostream &out, const Form& obj);

#endif