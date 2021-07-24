/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/24 15:54:42 by ztan          #+#    #+#                 */
/*   Updated: 2021/07/24 21:16:26 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat new_bur("Timmy", 50);
		std::cout << new_bur << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		return 0;
	}
	try
	{
		Form new_form("ass", 50, 50);
		std::cout << new_form << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		return 0;
	}
	
	return 0;
}
