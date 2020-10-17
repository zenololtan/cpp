/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/17 15:03:09 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/17 15:03:10 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include <iostream>

int	main()
{
	Character* me = new Character("me");
	std::cout << *me;

	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me; me->equip(pf);

	me->attack(b);
	std::cout << *me; me->equip(pr);
	std::cout << *me; me->attack(b);
	std::cout << *me;

	me->attack(b);
	std::cout << *me;

	return 0;
}
