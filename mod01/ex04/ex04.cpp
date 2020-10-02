#include <iostream>
#include <string>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "String: "<< str << " address: " << &str << std::endl;
	std::cout << "Pointer: " << *ptr << " address: " << ptr << std::endl;
	std::cout << "Ref: " << ref << " address: " << &ref << std::endl;
	return 0;
}
