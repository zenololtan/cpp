#include /RobotomyRequestForm.hpp/

RobotomyRequestForm::RobotomyRequestForm():
	/*initiate varables*/
{}

RobotomyRequestForm::~RobotomyRequestForm():
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	*this = copy;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	if (this != &copy)
		{
			/*val = copy.val;*/
		}
	return *this;
}

