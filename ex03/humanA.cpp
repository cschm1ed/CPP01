
#include "violence.hpp"

HumanA::HumanA( std::string name, Weapon& weapon) : name(name), weapon(weapon) {
 	std::cout << "constructor human " << name << " with weapon " << weapon.getType() << " called\n";
}

HumanA::~HumanA() {
	std::cout << "destructor human " << name << " called\n";
}

void	HumanA::attack() {
	std::cout << name << " attacks with their " << weapon.getType() << "\n";
}
