#include /ShrubberyCreationForm.hpp/

ShrubberyCreationForm::ShrubberyCreationForm():
	/*initiate varables*/
{}

ShrubberyCreationForm::~ShrubberyCreationForm():
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	*this = copy;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	if (this != &copy)
		{
			/*val = copy.val;*/
		}
	return *this;
}

