/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/24 18:33:41 by ztan          #+#    #+#                 */
/*   Updated: 2021/07/24 18:33:42 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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

