#include "npc.hpp"

void fishermenUpdate(Situation& worldState, npc& subject)
{
	//Health
	if (subject.foodlvl < 0)
	{
		std::cout << subject << "has died" << std::endl;
		// npcDie()
	}
	else if (subject.foodlvl == 0)
	{
		std::cout << subject << "belly grumbles" << std::endl;
		subject.fat = 0;
	}
	else if (subject.foodlvl > 0)
	{
		std::cout << subject << "gets fatter" << std::endl;
		subject.fat = 1;
	}
	//Work
	//_
	//Interact
	//_
	subject.age++;
}