#include "Form.hpp"

Form::Form(std::string n, int s_rec, int e_rec):
	name(n),
	sign_rec(s_rec),
	exec_rec(e_rec),
	signed_(false)
{
	if (s_rec > 150 || e_rec > 150)
		throw Form::GradeTooLowException;
	else if (s_rec < 1 || e_rec < 1)
		throw Form::GradeTooHighException;
	std::cout << n << " is made" << std::endl;
}

Form::~Form()
{
	std::cout << this->getName() + " got destroyed" << std::endl;
}

Form::Form(const Form &copy):
	name(copy.getName()),
	sign_rec(copy.getSignRec()),
	exec_rec(copy.getExecRec()),
	signed_(copy.getIsSigned())
{
	if (copy.getSignRec() > 150 || copy.getExecRec() > 150)
		throw Form::GradeTooLowException;
	else if (copy.getSignRec() < 1 || copy.getExecRec() < 1)
		throw Form::GradeTooHighException;
	*this = copy;
}

Form&	Form::operator=(const Form &copy)
{
	if (this != &copy)
		this->signed_ = copy.signed_;
	return *this;
}

std::ostream&	operator<<(std::ostream& os, const Form& copy)
{
	os << copy.getName() << " Form grade required " << copy.getSignRec() << \
	", executition required " << copy.getExecRec() << ", this form is " << std::boolalpha \
	<< copy.getIsSigned();
	return os;
}

const std::string		Form::getName() const
{
	return this->name;
}

int				Form::getSignRec() const
{
	return this->sign_rec;
}

int				Form::getExecRec() const
{
	return this->exec_rec;
}

bool			Form::getIsSigned() const
{
	return this->signed_;
}

const char*            Form::GradeTooLowException::what() const throw()
{
    return "Grade Too Low Exception";
}

void				beSigned(Bureaucrat &bur)
{
	if (this->sign_rec < bur.getGrade())
		throw GradeTooLowException();
	this->signed_ = true;
}