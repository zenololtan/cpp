#include /PresidentialPardonForm.hpp/

PresidentialPardonForm::PresidentialPardonForm():
	/*initiate varables*/
{}

PresidentialPardonForm::~PresidentialPardonForm():
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
	*this = copy;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	if (this != &copy)
		{
			/*val = copy.val;*/
		}
	return *this;
}

