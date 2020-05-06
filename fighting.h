#include <iostream>
#include <fstream>
#include <string>
#include "enemy.h"
#include "character.h"


using namespace std;


void fighting(int& level, int& skill_number, string character_name, string job, Skill s[4]) {
	Skill s[4];
	string winner = "None", loser = "None";
	string name;
	bool playing = true;
	// getting the information of enemy from the enemy.h about skills
	// if the level is 1, get the information about pontiff Sulyvahn
	if (level == 1) {
		name = "Sulyvahn";
		enemy_information(name);
		if (player_hp <= 0) {
			loser = "Player";
		}
		else if (enemy_hp <= 0) {
			winner = "Player";
		}
	}

	// if the level is 2, get the information about Lorian
	else if (level == 2) {
		name = "Lorian";
		enemy_information(name);
		if (player_hp <= 0) {
			loser = "Player";
		}
		else if (enemy_hp <= 0) {
			winner = "Player";
		}

	}

	// if the level is 3, get the information about Lothric
	else if (level == 3) {
		name = "Lothric";
		enemy_information(name);
		if (player_hp <= 0) {
			loser = "Player";
		}
		else if (enemy_hp <= 0) {
			winner = "Player";
		}

	}

	// if the level is 4, get the information about Artorias
	else if (level == 4) {
		name = "Artorias";
		enemy_information(name);
		if (player_hp <= 0) {
			loser = "Player";
		}
		else if (enemy_hp <= 0) {
			winner = "Player";
		}

	}
	// if the level is 5, get the information about Manus
	else if (level == 5) {
		name = "Manus";
		enemy_information(name);
		if (player_hp <= 0) {
			loser = "Player";
		}
		else if (enemy_hp <= 0) {
			winner = "Player";
		}

	}
	// Basic Fighting system
	while (playing) {
		// randomize --> skill
		int random_number;
		srand((int)time(0));
		random_number = rand() % 100;
		//case of if enemy is Manus who has an extra skill
		//modification of percentage
		if (level == 5) {
			if (random_number > 80) {

			}
			else if (random_number > 5 and random_number <= 80) {

			}
			else if (random_number = < 5)

		}
		//percentage for the 4 mini bosses
		else if (level != 5) {
			if (random_number > 80) {

			}
			else if (random_number < 20) {

			}
		}


	}
	//if player wins the round
	//increment level
	if (winner == "Player") {
		level++;
	}

	//if player loses the round
	//game ends with a "you lose" message
	else if (loser == "Player") {
		cout << "You lose";
	}

	// save the name class level and skill_number
	ofstream character;
	character.open("Player_status.txt");
	character << character_name << " " << job << " " << level << " " << skill_number;
	character.close();
}
