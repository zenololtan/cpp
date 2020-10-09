#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include <iostream>

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	std::cout << "\n-----------------------------------------\n" << std::endl;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(bob);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << "\n-----------------------------------------\n" << std::endl;
	ISpaceMarine* bart = new TacticalMarine;
	ISpaceMarine* berent = new AssaultTerminator;
	ISpaceMarine* karel = new TacticalMarine;
	std::cout << "\n-----------------------------------------\n" << std::endl;
	Squad smh;
	Squad vlc2;
	smh.push(bart);
	smh.push(berent);
	smh.push(berent);
	//multiple inclusions
	for (int i = 0; i < smh.getCount(); ++i)
	{
		ISpaceMarine* cur = smh.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "\n-----------------------------------------\n" << std::endl;
	smh.push(karel);
	for (int i = 0; i < smh.getCount(); i++)
	{
		ISpaceMarine* cur = smh.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	vlc2 = smh;
	// copying
	std::cout << "\n-----------------------------------------\n" << std::endl;
	for (int i = 0; i < vlc2.getCount(); ++i)
	{
		ISpaceMarine* cur = vlc2.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	return 0; 
}
