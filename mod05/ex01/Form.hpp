#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class	Form
{
	private:
		const std::string	name;
		const int			sign_rec;
		const int			exec_rec;
		bool				signed_;
	public:
		Form(std::string n, int s_rec, int e_rec);
		~Form();
		Form(const Form &copy);
		Form&			operator=(const Form& copy);
		const std::string	getName() const;
		int					getSignRec() const;
		int					getExecRec() const;
		bool				getIsSigned() const;
		void				beSigned(Bureaucrat &bur);

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

		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};
std::ostream&		operator<<(std::ostream& os, const Form& copy);

#endif
