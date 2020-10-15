/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:22:06 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 00:22:07 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak()
{
	std::string panther = "String panther";
	//wrm zou je dit moeten mallocen lmao
	std::cout << panther << std::endl;
}
