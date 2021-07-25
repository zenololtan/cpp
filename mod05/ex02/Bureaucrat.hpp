/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/24 15:54:47 by ztan          #+#    #+#                 */
/*   Updated: 2021/07/24 18:22:24 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>
# include "Form.hpp"

class	Form;

class	Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
	public:
		Bureaucrat(const std::string &n, int g);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat&			operator=(const Bureaucrat& copy);

		const std::string	getName() const;
		int					getGrade() const;
		void				incGrade();
		void				decGrade();
		void				signForm(Form &f);
		
		class	GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw()
			{
				return "My exception too low happened";
			}
		} GradeTooLowException;

		class	GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw()
			{
				return "My exception too high happened";
			}
		} GradeTooHighException;
};
std::ostream&		operator<<(std::ostream& os, const Bureaucrat& copy);

#endif
