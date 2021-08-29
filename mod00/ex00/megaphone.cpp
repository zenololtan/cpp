/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/29 16:17:22 by ztan          #+#    #+#                 */
/*   Updated: 2021/08/29 16:34:01 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int x = 1; argv[x]; x++)
			for (int i = 0; i < (int)std::strlen(argv[x]); i++)
				std::putchar(std::toupper(argv[x][i]));
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::putchar('\n');
	return (1);
}
