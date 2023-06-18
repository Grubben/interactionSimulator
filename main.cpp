#include <iostream>
#include <random>

#include "npc.hpp"

void	looper(Situation& worldState)
{
	for (size_t i=0; i < worldState.npcs.capacity(); i++)
	{
		if (worldState.npcs[i].office == fisherman)
			fishermenUpdate(worldState, worldState.npcs[i]);
	}
}

int	main()
{
	Situation worldState;
	npcsSet(worldState.npcs);
	npcsPrint(worldState.npcs);
	// std::cout << worldState.npcs.capacity();

	looper(worldState);
	return 0;

}