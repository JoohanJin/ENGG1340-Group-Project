#include <iostream>
#include <fstream>
#include <string>
#include "fighting.h"
#include "enemy.h"
#include "character.h"


using namespace std;




void fighting(int &level) {
	string winner = "None", loser = "None";
	string name = "";
	bool playing = true;
	// getting the information of enemy from the enemy.txt about skills
	// if the level is 1, get the information about pontiff Sulyvahn
	if (level == 1) {
		name = "Sulyvahn";
		enemy_information(name);
		while (player_hp != 0 && enemy_hp != 0) {
			//the fighting process takes place

		}
		if (player_hp <= 0) {
			loser = "Player";
		}
		else if (enemy_hp <= 0{
			winner = "Player";
		})
	}

	// if the level is 2, get the information about Lorian
	else if (level == 2) {
		name = "Lorian";
		enemy_information(name);

	}

	// if the level is 3, get the information about Lothric
	else if (level == 3) {
		name = "Lothric";
		enemy_information(name);

	}

	// if the level is 4, get the information about Artorias
	else if (level == 4) {
		name = "Artorias";
		enemy_information(name);

	}
	// if the level is 3, get the information about Manus
	else if (level == 5) {
		name = "Manus";
		enemy_information(name);

	}
	// Basic Fighting system
	while (playing) {
		// randomize --> skill
	}

	if (winner == "Player") {
		level++;
	}
	else if (loser == "Player") {
		cout << "You lose";
	}
}
