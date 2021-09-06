/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/29 16:40:26 by ztan          #+#    #+#                 */
/*   Updated: 2021/09/06 13:42:53 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	ft_add(class phonebook *pb, int i)
{
	std::string input;

	pb[i].setter("What is your name?: ", &phonebook::set_name);
	pb[i].setter("What is your surname?: ", &phonebook::set_surname);
	pb[i].setter("what is your nickname?: ", &phonebook::set_nickname);
	pb[i].setter("what is your login: ", &phonebook::set_login);
	pb[i].setter("what is your adress?: ", &phonebook::set_postalAdress);
	pb[i].setter("what is your mail?: ", &phonebook::set_email);
	pb[i].setter("what is your phonenumber?: ", &phonebook::set_number);
	pb[i].setter("what is your birthday?: ", &phonebook::set_birthday);
	pb[i].setter("what is your fav meal?: ", &phonebook::set_favMeal);
	pb[i].setter("what color is your underwear?: ", &phonebook::set_underwearColor);
	pb[i].setter("what is your darkest secret?: ", &phonebook::set_darkestSecret);
}

std::string truncate(std::string str, size_t width, bool show_ellipsis=true)
{
	width -= 1;
    if (str.length() > width)
	{
		if (show_ellipsis)
            return str.substr(0, width) + ".";
        else
            return str.substr(0, width);
	}
    return str;
}

void	ft_makeinfo(class phonebook pb, int i)
{
	std::cout << std::setfill(' ') << std::setw(10) << std::right << i << "|";
	std::cout << std::setfill(' ') << std::setw(10) << std::right <<
		 truncate(pb.phonebook::get_name(), 10, true) << "|";
	std::cout << std::setfill(' ') << std::setw(10) << std::right <<
		 truncate(pb.phonebook::get_surname(), 10, true) << "|";
	std::cout << std::setfill(' ') << std::setw(10) << std::right <<
		 truncate(pb.phonebook::get_nickname(), 10, true) << std::endl;
}

void	ft_makeseperator(void)
{
	std::cout << std::setfill('-') << std::setw(10) << "-" << "|";
	std::cout << std::setfill('-') << std::setw(10) << "-" << "|";
	std::cout << std::setfill('-') << std::setw(10) << "-" << "|";
	std::cout << std::setfill('-') << std::setw(10) << "-" << std::endl;
}

void	ft_makeheader(void)
{
	std::cout << std::setfill(' ') << std::setw(10) << std::right <<
		 "index" << "|";
	std::cout << std::setfill(' ') << std::setw(10) << std::right <<
		 "first name" << "|";
	std::cout << std::setfill(' ') << std::setw(10) << std::right <<
		 "last name" << "|";
	std::cout << std::setfill(' ') << std::setw(10) << std::right <<
		 "nickname" << std::endl;
	ft_makeseperator();
}

void	ft_giveinfo(class phonebook *pb, int i)
{
	std::cout << "Name: " << pb[i].phonebook::get_name() << std::endl;
	std::cout << "Surname: " << pb[i].phonebook::get_surname() << std::endl;
	std::cout << "Nickname: " << pb[i].phonebook::get_nickname() << std::endl;
	std::cout << "Login: " << pb[i].phonebook::get_login() << std::endl;
	std::cout << "Postal adress: " << pb[i].phonebook::get_postalAdress() << std::endl;
	std::cout << "Email: " << pb[i].phonebook::get_email() << std::endl;
	std::cout << "Number: " << pb[i].phonebook::get_number() << std::endl;
	std::cout << "Birthday: " << pb[i].phonebook::get_birthday() << std::endl;
	std::cout << "Fav meal: " << pb[i].phonebook::get_favMeal() << std::endl;
	std::cout << "Underwear color: " << pb[i].phonebook::get_underwearColor() << std::endl;
	std::cout << "Darkest secret: " << pb[i].phonebook::get_darkestSecret() << std::endl;
}

void	ft_select(class phonebook *pb)
{
	std::string command;

	std::cout << "Would you like to know more??" << std::endl;
	std::getline(std::cin, command);
	if (command.compare("no") == 0)
	{
		std::cout << "aight." << std::endl;
		return ;
	}
	if (command.compare("1") == 0)
		ft_giveinfo(pb, 0);
	if (command.compare("2") == 0)
		ft_giveinfo(pb, 1);
	if (command.compare("3") == 0)
		ft_giveinfo(pb, 2);
	if (command.compare("4") == 0)
		ft_giveinfo(pb, 3);
	if (command.compare("5") == 0)
		ft_giveinfo(pb, 4);
	if (command.compare("6") == 0)
		ft_giveinfo(pb, 5);
	if (command.compare("7") == 0)
		ft_giveinfo(pb, 6);
	if (command.compare("8") == 0)
		ft_giveinfo(pb, 7);
}

void	ft_search(class phonebook *pb, int amount)
{
	int i;

	i = 0;
	ft_makeheader();
	while (i < amount)
	{
		ft_makeinfo(pb[i], i + 1);
		if (i + 1 < amount)
			ft_makeseperator();
		i++;
	}
	ft_select(pb);
}

int main(void)
{
	phonebook pb[7];
    std::string command;
	static int i;

	i = 0;
    while (1)
	{
		std::cout << "what u want m8..." << std::endl;
		std::getline(std::cin, command);
		std::cout << "ur command is: " << command << std::endl;
		if (command.compare("exit") == 0)
		{
			std::cout << "exitting" << std::endl;
			return (0);
		}	
		if (command.compare("add") == 0)
		{
			ft_add(pb, i);
			i++;
		}
		if (command.compare("search") == 0)
			ft_search(pb, i);
	}
    return 0;
}
