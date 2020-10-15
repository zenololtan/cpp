/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/11 16:12:07 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/12 01:27:59 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Colors.hpp"
#include "Dividers.hpp"
#include <iostream>

void	subject_test()
{
	print_divider(CYAN, "Subject test");

	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter		*me = new Character("me");
	AMateria		*tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter		*bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;

	delete src;

	print_line(CYAN);
}

void	extra_tests(void)
{
	print_divider(MAGENTA, "Extra tests");

	// Using string literals for testing purposes
	const char		*ice = "ice";
	const char		*cure = "cure";
	const char		*fire = "fire";

	MateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	MateriaSource	*copy = new MateriaSource();	// Concrete class to allow copying
	*copy = *src; 				// Testing assignation
	ICharacter		*hero = new Character("Billy Hatcher");
	ICharacter		*enemy = new Character("Some evil dragon, or something");

	AMateria*		tmp;

	// Equipping while checking to see if materia exists in src.
	tmp = copy->createMateria(ice);
	if (tmp != 0) {
		std::cout << ice << " equipped!" << std::endl;
		hero->equip(tmp);
	}
	tmp = copy->createMateria(cure);
	if (tmp != 0) {
		std::cout << cure << " equipped!" << std::endl;
		hero->equip(tmp);
	}
	// Erroneous materia
	tmp = copy->createMateria(fire);
	if (tmp != 0) {
		std::cout << fire << " equipped!" << std::endl;
		hero->equip(tmp);
	}

	hero->use(0, *enemy);		// Shoot ice bolt at NAME
	hero->use(1, *enemy);		// heals NAME's wounds

	hero->unequip(0);
	hero->use(0, *enemy);		// Nothing, 0 unequiped
	hero->use(1, *enemy);		// heals NAME's wounds

	hero->equip(copy->createMateria("ice"));

	// Shouldn't be equipped, Character class rejects NULL pointer.
	hero->equip(copy->createMateria("fire"));

	hero->use(0, *enemy);		// Shoot ice bolt at NAME (ice re-equipped)

	hero->use(2, *enemy);		// Nothing, as no equipped item at 2.
	hero->use(-1, *enemy);		// Nothing, index out of range
	hero->use(10, *enemy);		// Nothing, index out of range

	delete hero;
	delete enemy;
	delete src;
	delete copy;

	print_line(MAGENTA);
}

int	main()
{
	subject_test();
	extra_tests();
	
	return 0;
}
