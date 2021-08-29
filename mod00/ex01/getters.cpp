/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   getters.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/29 16:40:23 by ztan          #+#    #+#                 */
/*   Updated: 2021/08/29 16:43:02 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string phonebook::get_name(void)
{
	return name;
}

std::string phonebook::get_surname(void)
{
	return surname;
}

std::string phonebook::get_nickname(void)
{
	return nickname;
}

std::string phonebook::get_login(void)
{
	return login;
}

std::string phonebook::get_postalAdress(void)
{
	return postalAdress;
}

std::string phonebook::get_email(void)
{
	return email;
}

std::string phonebook::get_number(void)
{
	return number;
}

std::string phonebook::get_birthday(void)
{
	return birthday;
}

std::string phonebook::get_favMeal(void)
{
	return favMeal;
}

std::string phonebook::get_underwearColor(void)
{
	return underwearColor;
}

std::string phonebook::get_darkestSecret(void)
{
	return darkestSecret;
}
