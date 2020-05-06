#include <iostream>
#include <fstream>
#include <string>
#include "fighting.h"
#include "enemy.h"

using namespace std;



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
