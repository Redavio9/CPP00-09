/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarraji <rarraji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:02:03 by rarraji           #+#    #+#             */
/*   Updated: 2023/11/26 15:09:11 by rarraji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &obj);
		Bureaucrat operator=(Bureaucrat const &obj);
		
		std::string getName() const;
		int getGrade() const;
		
		void increment();
		void decrement();
		
		void signForm(AForm &obj);
		void executeForm(AForm const & obj);
		
		class GradeTooHighException : public std::exception {
			public:
				const char *what() const throw() {
					return "Grade too high";
				}
		};
		class GradeTooLowException : public std::exception {
		public:
			const char *what() const throw() {
				return "Grade too low";
			}
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif


