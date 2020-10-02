#include <iostream>

void	memoryLeak()
{
	std::string panther = "String panther";

	std::cout << panther << std::endl;
}
