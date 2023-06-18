#pragma once
#include <iostream>
#include <random>

enum Gender: bool {
	female,
	male,
};
const std::string Genders[] = {"female", "male"};

enum Office: int8_t {
	fisherman,
	carpenter,
	trader,
	noble,
	Count
};
const Office Offices[] = {fisherman, carpenter, trader, noble};
const std::string OfficeNames[] = {"fisherman", "carpenter", "trader", "noble"};
#define QOFFICES static_cast<int>(Office::Count)

struct npc {
	int			id;
	std::string	name = ("Firstname Lastname");
	bool 		gender;
	Office		office;
	int16_t		money;
	
	// EmotionalState
	bool 		happy;

	//PhysicalState
	int8_t		foodlvl; //-8 <-> +8
	int8_t		thirstlvl;
	int8_t	age = 24;
	bool	fat;

	//FamilyBonds
	int	father;
	int	mother;
	// siblings have the same mother and/or father

};
std::ostream& operator<<(std::ostream &os, const npc& obj);

struct Situation {
	std::vector<npc> npcs = std::vector<npc>(50);
	int	costBread = 14;
	int	dayHour = 12;
};

/*	FUNCS	*/
void	npcsSet(std::vector<npc>& npcs);
void	npcsPrint(std::vector<npc>& npcs);
void fishermenUpdate(Situation& worldState, npc& subject);
