/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:30:19 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 02:35:32 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int	main()
{
	{
		Weapon		club = Weapon("crude spiked club");

		HumanA bob("Bob", club); // using a ref because it is more efficient to use the same obj
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon		club = Weapon("crude spiked club");

		HumanB Jim("Jim");  // not initializing weapon here so i cant store it as a ref, ref cant be NULL
		Jim.setWeapon(club);
		Jim.attack();
		club.setType("some other type of club");
		Jim.attack();
	}
}
