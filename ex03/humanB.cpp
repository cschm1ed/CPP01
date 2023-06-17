
#include "violence.hpp"

HumanB::HumanB( std::string name) : name(name){
	std::cout << "constructor human " << name << " called\n";
	weapon = NULL;
}

HumanB::~HumanB() {
	std::cout << "destructor human " << name << " called\n";
}

void	HumanB::setWeapon( Weapon new_weapon) {
	weapon = &new_weapon;
}

void	HumanB::attack() {
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << "\n";
	else
		std::cout << name << " attacks without a weapon\n";
}
