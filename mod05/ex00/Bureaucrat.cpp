#include "Bureaucrat.hpp"
#include <random>
#include <ctime>

Bureaucrat::Bureaucrat(const std::string &n, int g) : name(n)
{
	try
		this->grade = g;
	catch(g > 150)

}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &copy)
{
	if (this != &copy)
		{
			(std::string)this->name = (std::string)copy.name;
			this->grade = copy.grade;
		}
	return *this;
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

int			Bureaucrat::randomGrade()
{
	srand(time(NULL));
	return rand() % 150 + 1;
}
