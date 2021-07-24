/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/24 15:54:42 by ztan          #+#    #+#                 */
/*   Updated: 2021/07/24 18:23:48 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
	
	return 0;
}
