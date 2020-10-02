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
	std::string	outputname(Filename + ".replace");
	std::ofstream	output(outputname.c_str());
	std::string	buff;
	std::size_t	strlen = s1.length();
	std::size_t	index;

	if (!input || !output)
		return Error("Could not open file.");
	if (s1.compare(s2) == 0)
		return Error("Can not replace a string with itself.");
	while (std::getline(input, buff))
	{
		index = 0;
		while ((index = buff.find(s1), index) != std::string::npos)
		{
			buff.replace(index, strlen, s2);
			index += strlen;
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

