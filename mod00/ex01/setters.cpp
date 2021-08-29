/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   setters.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/29 16:40:21 by ztan          #+#    #+#                 */
/*   Updated: 2021/08/29 16:43:10 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void		phonebook::set_name(std::string input)
{
	name = input;
}

void		phonebook::set_surname(std::string input)
{
	surname = input;
}

void		phonebook::set_nickname(std::string input)
{
	nickname = input;
}

void		phonebook::set_login(std::string input)
{
	login = input;
}

void		phonebook::set_postalAdress(std::string input)
{
	postalAdress = input;
}

void		phonebook::set_email(std::string input)
{
	email = input;
}

void		phonebook::set_number(std::string input)
{
	number = input;
}

void		phonebook::set_birthday(std::string input)
{
	birthday = input;
}

void		phonebook::set_favMeal(std::string input)
{
	favMeal = input;
}

void		phonebook::set_underwearColor(std::string input)
{
	underwearColor = input;
}

void		phonebook::set_darkestSecret(std::string input)
{
	darkestSecret = input;
}
