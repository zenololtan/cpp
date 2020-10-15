/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dividers.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/12 01:18:26 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/12 01:27:40 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Colors.hpp"
#include <iostream>

void	print_divider(std::string color, std::string message)
{
	std::cout << BOLD << color << "--------------------------------------" <<
		std::endl << message << std::endl <<
		"--------------------------------------" << RESET << std::endl;
}

void	print_line(std::string color)
{
	std::cout << BOLD << color << "--------------------------------------"
		<< RESET << std::endl;
}
