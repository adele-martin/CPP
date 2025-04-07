#include "Zombie.hpp"

/* In this function we can allocate memory in two different ways.
The first one is by using a stack (dynamic allocation) - which uses new and delete and is faster-
The second one is using heap --> slower
*/
int main()
{
	int N = 5;
	Zombie *horde = zombieHorde(5, "Gabrielle");
	// for (int i = 0; i < N; i++)
	// {
	// 	announce()
	// }
	// for (int i = 0; i < N; i++)
	// {
	// 	delete horde[i];
	// }
	delete[] horde;
}