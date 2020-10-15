/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 15:30:18 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 15:30:19 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int	main(void)
{
	FragTrap	frag("Phrag");

	frag.beRepaired(20);
	frag.takeDamage(15);
	frag.meleeAttack("some random dude");
	frag.rangedAttack("some random far away dude");
	frag.beRepaired(11);

	FragTrap	*frag2 = new FragTrap();
	frag2->vaulthunter_dot_exe("some random dude");
	frag2->vaulthunter_dot_exe("some random dude");
	frag2->vaulthunter_dot_exe("some random dude");
	frag2->vaulthunter_dot_exe("some random dude");
	frag2->vaulthunter_dot_exe("some random dude");
	frag2->vaulthunter_dot_exe("some random dude");
	frag2->takeDamage(200);
	delete frag2;

	ScavTrap	scav("Bouncer");
	scav.takeDamage(53);
	scav.meleeAttack("some random dude");
	scav.rangedAttack("some random far away dude");
	scav.beRepaired(300);

	ScavTrap	*scav2 = new ScavTrap();
	scav2->challengeNewcomer();
	scav2->challengeNewcomer();
	scav2->challengeNewcomer();
	scav2->challengeNewcomer();
	scav2->challengeNewcomer();
	scav2->takeDamage(200);
	delete scav2;

	NinjaTrap	*ninja2 = new NinjaTrap();
	ninja2->ninjaShoebox(scav);
	ninja2->ninjaShoebox(frag);
	
	NinjaTrap	ninja("RacialSteriotype");
	ninja.ninjaShoebox(*ninja2);
	delete ninja2;
	return 0;
}
