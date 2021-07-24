/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/24 18:33:29 by ztan          #+#    #+#                 */
/*   Updated: 2021/07/24 18:33:30 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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

