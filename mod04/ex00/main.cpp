/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/17 00:43:23 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/17 01:51:22 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include <iostream>

class Test : public Peon {
	private:
		Test(void);
	public:
		Test(Test const &src);
		Test		&operator=(Test const &rhs);
		~Test(void);

		Test(std::string name);
		virtual void	getPolymorphed(void) const;
};

Test::Test(void) : Peon("Test") {
	std::cout << "im test and i have no creativity" << std::endl;
	return ;
}

Test::Test(Test const &src) : Peon("Test") {
	*this = src;
	return ;
}

Test::~Test(void) {
	std::cout << "Test gone like my creativity" << std::endl;
	return ;
}

Test	&Test::operator=(Test const &rhs) {
	if (&rhs == this) { return *this; }
	Peon::operator=(rhs);
	return (*this);
}

std::ostream		&operator<<(std::ostream &o, Test const &i) {
	std::cout << "I'm " << i.getName() << ", and i like sleep" << std::endl;
	return (o);
}

Test::Test(std::string name) : Peon(name) {
	std::cout << "bruh" << std::endl;
	return ;
}

void		Test::getPolymorphed(void) const {
	std::cout << this->getName() << " has been turned into a funny and creative test"
		<< std::endl;
	return ;
}

int main()
{
	
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	
	std::cout << "-------------------------------" << std::endl;
	
	Sorcerer barbara("barbara", "the idk some cool title");
	Victim			bob("bob");
	Peon			bas("bas");
	Test			test("test");
	
	std::cout << barbara << bob << bas << test;
	
	barbara.polymorph(bob);
	barbara.polymorph(bas);
	barbara.polymorph(test);
	
	return 0;
}
