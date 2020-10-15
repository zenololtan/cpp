/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 15:28:32 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 15:28:34 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap	frag("Phrag");
	FragTrap	*frag2 = new FragTrap();
	ScavTrap	scav("Bouncer");
	ScavTrap	*scav2 = new ScavTrap();

	frag.beRepaired(20);
	frag.takeDamage(15);
	frag.meleeAttack("some random dude");
	frag.rangedAttack("some random far away dude");
	frag.beRepaired(10);
	frag2->vaulthunter_dot_exe("some random dude");
	frag2->vaulthunter_dot_exe("some random dude");
	frag2->vaulthunter_dot_exe("some random dude");
	frag2->vaulthunter_dot_exe("some random dude");
	frag2->vaulthunter_dot_exe("some random dude");
	frag2->vaulthunter_dot_exe("some random dude");
	frag2->takeDamage(200);

	scav.beRepaired(20);
	scav.takeDamage(15);
	scav.meleeAttack("some random dude");
	scav.rangedAttack("some random far away dude");
	scav.beRepaired(10);
	scav2->challengeNewcomer();
	scav2->challengeNewcomer();
	scav2->challengeNewcomer();
	scav2->challengeNewcomer();
	scav2->challengeNewcomer();
	scav2->takeDamage(200);
	delete scav2;
	scav.takeDamage(95);
	delete frag2;
	frag.takeDamage(95);
	return 0;
}
