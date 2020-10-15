/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 15:30:56 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 15:30:57 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int	main(void)
{
	SuperTrap	super("IhateThis");
	FragTrap	fragger("ForFragsSake");

	super.vaulthunter_dot_exe("some poor dude");
	super.ninjaShoebox(fragger);
	return 0;
}
