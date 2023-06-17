
#include "Zombie.hpp"

int	main()
{
	Zombie*	vikram;

	Zombie	guillaume("guillaume");
	guillaume.announce();
	std::cout << "\n";
	randomChump("Gregor");
	std::cout << "\n";
	vikram = newZombie("Vikram");
	vikram->announce();
	std::cout << "\n";
	delete vikram;
}
