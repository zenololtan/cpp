/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/29 16:39:32 by ztan          #+#    #+#                 */
/*   Updated: 2021/09/06 13:42:57 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HP_DATA_HPP_
# define HP_DATA_HPP_

# include <iostream>
# include <string>
# include <iomanip>

class phonebook
{
	private:
	std::string name;
	std::string surname;
	std::string nickname;
	std::string login;
	std::string postalAdress;
	std::string email;
	std::string number;
	std::string birthday;
	std::string favMeal;
	std::string underwearColor;
	std::string darkestSecret;

    public:
	std::string get_name(void);
	void		set_name(std::string input);
	std::string get_surname(void);
	void		set_surname(std::string input);
	std::string get_nickname(void);
	void		set_nickname(std::string input);
	std::string get_login(void);
	void		set_login(std::string input);
	std::string get_postalAdress(void);
	void		set_postalAdress(std::string input);
	std::string get_email(void);
	void		set_email(std::string input);
	std::string get_number(void);
	void		set_number(std::string input);
	std::string get_birthday(void);
	void		set_birthday(std::string input);
	std::string get_favMeal(void);
	void		set_favMeal(std::string input);
	std::string get_underwearColor(void);
	void		set_underwearColor(std::string input);
	std::string get_darkestSecret(void);
	void		set_darkestSecret(std::string input);
	void		setter(std::string str, void (phonebook::*f)(std::string));

};

#endif
