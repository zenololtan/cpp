/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 15:28:08 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 15:28:09 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	frag("Phrag");
	FragTrap	*frag2 = new FragTrap();
	FragTrap	frag3 = frag;

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
	delete frag2;
	frag.takeDamage(95);
	frag.takeDamage(95);
	return 0;
}
