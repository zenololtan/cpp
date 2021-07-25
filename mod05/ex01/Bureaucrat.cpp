/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/24 15:54:50 by ztan          #+#    #+#                 */
/*   Updated: 2021/07/24 18:24:52 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &n, int g) : name(n)
{
	if (g > 150)
		throw Bureaucrat::GradeTooLowException;
	else if (g < 1)
		throw Bureaucrat::GradeTooHighException;
	this->grade = g;
	std::cout << n << " is made" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << this->getName() + " got destroyed" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &copy)
{
	if (this != &copy)
			this->grade = copy.grade;
	return *this;
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& copy)
{
	os << copy.getName() << " Bureaucrat grade " << copy.getGrade();
	return os;
}

const std::string	Bureaucrat::getName() const
{
	return this->name;
}

int			Bureaucrat::getGrade() const
{
	return this->grade;
}

void		Bureaucrat::incGrade()
{
	if (this->grade > 1)
		this->grade -= 1;
}

void		Bureaucrat::decGrade()
{
	if (this->grade < 150)
		this->grade += 1;
}

void		Bureaucrat::signForm(Form &f)
{
	if (this->grade > f.getSignRec())
	{
		std::cout << "Bureaucrat named " << this->getName() << "can not sign form, ";
		std::cout << "grade is too low" <<std::endl;
		return ;
	}
	if (f.getIsSigned() == true)
	{
		std::cout << "File has already been signed" << std::endl;
		return ;
	}
	f.beSigned(*this);
}
