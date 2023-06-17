
#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( void ) {
	std::cout << "Zombie " << name << " constructor called\n";
}

Zombie::~Zombie() {
	std::cout << "Zombie " << name << " destructor called\n";
}

void 	Zombie::set_name(std::string new_name) {
	name = new_name;
}

void	Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
