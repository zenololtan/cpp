/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/24 18:33:35 by ztan          #+#    #+#                 */
/*   Updated: 2021/07/24 18:33:37 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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

