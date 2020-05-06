#include <iostream>
#include <fstream>
#include <string>
#include "fighting.h"
#include "enemy.h"

using namespace std;

struct enemy {
	int health
};

enemy enemy_information(int level) {
	// getting the information of enemy from the enemy.txt about skills
	// if the level is 1, get the information about pontiff Sulyvahn
	if (level == 1) {
		enemy = 

	}

	// if the level is 2, get the information about Lorian
	// special for Lothric
	else if (level == 2) {

	}

	// if the level is 3, get the information about Artorias
	else if (level == 3) {

	}

	// if the level is 3, get the information about Manus
	else if (level == 4) {

	}
}

void fighting(int &level) {
	enemy information = enemy_information(level);
	string winner = "None", loser = "None";
	bool playing = true;

	// Basic Fighting system
	while (playing) {
		// randomize --> skill
	}

	if (winner == "Player") {
		level++;
	}
	
}
