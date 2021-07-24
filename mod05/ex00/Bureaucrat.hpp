#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>

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

		const std::string			getName() const;
		int					getGrade() const;
		void				incGrade();
		void				decGrade();
		int					randomGrade();
};

#endif
