
#include "Zombie.hpp"

int	main()
{
	Zombie* horde = zombieHorde(10, "Rick and Morty fans");

	for (int i = 1; i <= 10; i ++) {
		std::cout << i << " ";
		horde[i].announce();
	}

	delete[] horde;
	return 0;
}
