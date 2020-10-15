/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:28:43 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 00:28:44 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "String: "<< str << " address: " << &str << std::endl;
	std::cout << "Pointer: " << *ptr << " address: " << ptr << std::endl;
	std::cout << "Ref: " << ref << " address: " << &ref << std::endl;
	return 0;
}
