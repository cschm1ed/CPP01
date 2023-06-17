#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "weapon.hpp"
#include <iostream>

class HumanB {

private:

	std::string	name;
	Weapon		*weapon;

public:

	HumanB( std::string name );
	~HumanB();
	void setWeapon( Weapon new_weapon );
	void attack();

};

#endif
