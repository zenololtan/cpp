/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:30:43 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 01:33:20 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	Error(std::string error)
{
	std::cout << "Error" << std::endl;
	std::cout << error << std::endl;
	return 1;	
}

int	replace(std::string Filename, std::string s1, std::string s2)
{
	std::ifstream	input(Filename.c_str());
	std::string		outputname(Filename + ".replace");
	std::ofstream	output(outputname.c_str());
	std::string		buff;
	std::size_t		strlen1 = s1.length();
	std::size_t		strlen2 = s2.length();
	std::size_t		index;

	if (!input || !output)
		return Error("Could not open file.");
	if (s1.compare(s2) == 0)
		return Error("Can not replace a string with itself.");
	while (std::getline(input, buff))
	{
		index = buff.find(s1);
		while (index != std::string::npos)
		{
			buff.replace(index, strlen1 , s2);
			index = buff.find(s1, index + strlen2);
		}
		output << buff;
		if (!output.eof())
			output << std::endl;
	}
	input.close();
	output.close();
	return 0;
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return Error("Invalid arguments");
	if (replace(argv[1], argv[2], argv[3]) == 1)
		return 1;
	return 0;
}

