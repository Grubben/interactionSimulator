#include "npc.hpp"

std::ostream& operator<<(std::ostream &os, const npc& obj)
{
	return os << obj.id << ": ";
}

void	npcsSet(std::vector<npc>& npcs)
{
	std::mt19937 mt(7);
	std::uniform_int_distribution<bool> dist099(0, 1);
	std::uniform_int_distribution<int> officegenerator(0, QOFFICES - 1);

	for (size_t i=0; i < npcs.capacity(); i++)
	{
		npcs[i].id = i;
		// npcs[i].name = 
		npcs[i].gender = dist099(mt);
		// npcs[i].office = Offices[officegenerator(mt)];
		npcs[i].office = fisherman;		
		npcs[i].happy = dist099(mt);
	}
}

void	npcsPrint(std::vector<npc>& npcs)
{
	for (size_t i=0; i < npcs.capacity(); i++)
	{
		std::cout << "Id: " << npcs[i].id << "\n";
		// std::cout << "Name: " << npcs[i].name << "\n";
		std::cout << "Sex: " << Genders[npcs[i].gender] << "\n";
		std::cout << "Office: " << OfficeNames[npcs[i].office] << "\n";
		std::cout << "Happy: " << npcs[i].happy << "\n";
		
		std::cout << "\n";
	}
	std::cout << std::endl;
}
