/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:21:20 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 00:21:21 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>
#include <new>
#include <cstdlib>

void	ponyOnTheHeap()
{
	Pony *pony = new (std::nothrow) Pony;
	std::cout << "on the heap" << std::endl;
	if (!pony)
	{
		std::cout << "Failed to allocate pony on the heap" << std::endl;
		return;
	}
	pony->pet();
	pony->ride();
	pony->feed();
	delete pony;
}

void	ponyOnTheStack()
{
	Pony pony;
	std::cout << "on the stack" << std::endl;
	pony.pet();
	pony.ride();
	pony.feed();
}

int	main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	system("leaks Pony");
}
