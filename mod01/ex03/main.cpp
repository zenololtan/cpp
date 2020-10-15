/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:26:11 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 02:27:31 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <iostream>

int	main()
{
	//why did i allocate it using new? I believed it said so in the excersize, very unclear :/
	ZombieHorde	zhorde(4);
	std::cout << std::endl;
	ZombieHorde	otherzhorde(5);
	std::cout << std::endl;
	return 0;
}
