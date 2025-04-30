#include "Zombie.hpp"

int	main() {
	Zombie	*horde = zombieHorde(5, "YEAH");
	delete[] horde;
	return 0;
}