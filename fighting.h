#include <iostream>
#include <string>
#include <ctime>
#include "enemy.h"


using namespace std;

void check_game_done(bool& playing, string winner, int& level, int& skill_number) {
	//if player wins the round
	//increment level
	//loop for current level is done
	if (winner == "Player") {
		cout << "YOU HUNTED" << endl;
		level++;
		playing = false;
	}

	//if player loses the round
	//game ends with a "you lose" message
	//if player lose, and want to retry, player can retry
	else if (winner == "Enemy") {
		cout << "YOU DIED" << endl;
		playing = false;
	}
}

void check_game_done_hp(double enemy_hp, double player_hp, string& winner) {
	if (enemy_hp <= 0) {
		winner = "Player";
	}

	else if (player_hp <= 0) {
		winner = "Enemy";
	}
}

void printing_status(double enemy_hp, double player_hp) {
	cout << "Your hp is " << player_hp << endl;
	cout << "Enemy's hp is " << enemy_hp << endl;
}

double special_skill(int previous_skill, string job) {
	if (previous_skill == 1) {
		srand((int)time(0));
		int number = rand() % 2;
		if (job == "Knight") {
			cout << "You block enemy's attack with your TITAN SHIELD!!!" << endl;
			return 0.5;
		}

		else if (job == "Wizard") {
			// when the armor is not broken
			if (number == 0) {
				cout << "Your armor is not broken, successfully reflect enemy's enemy!" << endl;
				return -1;
			}

			// when the armor is broken
			else if (number == 1) {
				cout << "Your armor is broken!, you get more damage!" << endl;
				return 1.5;
			}
		}

		else if (job == "Theif") {
			// when dodge was successful
			if (number == 0) {
				cout << "You successfully dodge enemy's attack!" << endl;
				return 0;
			}

			// when dodge was not successful
			else if (number == 1) {
				cout << "You could not dodge enemy's attack!" << endl;
				return 1;
			}
		}

		else {
			// healing already happened
			return 1;
		}
	}

	else if (previous_skill != 1) {
		return 1;
	}
}

void calculating_damage(int random_number, int previous_skill, string job, Enemy e[5], int level, double& damage, double& healing, string name) {
	double number;
	//modification of percentage
	if (level == 5) {
		// Clutches of The Abyss
		if (random_number >= 20 && random_number < 95) {
			cout << "Manus uses Clutches of the Abyss!" << endl;
			damage = e[1].damage;
			number = special_skill(previous_skill, job);
			damage *= number;
		}

		// Downward Blow
		else if (random_number < 20) {
			cout << "Manus uses Downward Blow" << endl;
			damage = e[2].damage;
			number = special_skill(previous_skill, job);
			damage *= number;
		}

		// Last Resort
		else if (random_number >= 95) {
			cout << "Manus uses Last Resort!" << endl;
			cout << "THIS ATTACK WILL BE THE LAST THING YOU CAN SEE BEFORE YOU DIE!!!!" << endl;
			damage = 50000;
			number = special_skill(previous_skill, job);
			damage *= number;
		}
	}

	//percentage for the 3 mini bosses
	else if (level != 5 && level != 3) {
		// special attack
		if (random_number < 20) {
			cout << name << " uses " << e[2].move << endl;
			damage = e[2].damage;
			number = special_skill(previous_skill, job);
			damage *= number;
		}
		// normal
		else if (random_number >= 20) {
			cout << name << " uses " << e[1].move << endl;
			damage = e[1].damage;
			number = special_skill(previous_skill, job);
			damage *= number;
		}
	}

	// Lothric who has healing magic
	else if (level == 3) {
		// special --> also has healing
		if (random_number < 20) {
			cout << name << " uses " << e[2].move << endl;
			damage = e[2].damage;
			number = special_skill(previous_skill, job);
			damage *= number;
			healing = e[2].healing;
		}

		// normal
		else if (random_number >= 20) {
			cout << name << " uses " << e[1].move << endl;
			damage = e[1].damage;
			number = special_skill(previous_skill, job);
			damage *= number;
		}
	}
	
}



void fighting(int& level, int& skill_number, string job, Skill s[4], string& winner, Enemy e[5]) {
	string name, current_player("Enemy"), dialogue;
	int previous_skill = 0, Max_hp;
	bool playing = true;
	double player_hp, enemy_hp, damage;
	// getting the information of enemy from the enemy.h about skills
	// if the level is 1, get the information about pontiff Sulyvahn
	if (level == 1) {
		name = "Sulyvahn";
		enemy_information(name, e);
		dialogue = "";
		cout << dialogue << endl;
		Max_hp = 5000;
		player_hp = 5000;
		enemy_hp = e[0].enemy_hp;
	}

	// if the level is 2, get the information about Lorian
	else if (level == 2) {
		name = "Lorian";
		enemy_information(name, e);
		dialogue = "";
		cout << dialogue << endl;
		Max_hp = 10000;
		player_hp = 10000;
		enemy_hp = e[0].enemy_hp;
	}

	// if the level is 3, get the information about Lothric
	else if (level == 3) {
		name = "Lothric";
		enemy_information(name, e);
		dialogue = "";
		cout << dialogue << endl;
		Max_hp = 10000;
		player_hp = 10000;
		enemy_hp = e[0].enemy_hp;
		skill_number = 3;
	}

	// if the level is 4, get the information about Artorias
	else if (level == 4) {
		name = "Artorias";
		enemy_information(name, e);
		dialogue = "";
		cout << dialogue << endl;
		Max_hp = 15000;
		player_hp = 15000;
		enemy_hp = e[0].enemy_hp;
	}
	// if the level is 5, get the information about Manus
	else if (level == 5) {
		name = "Manus";
		enemy_information(name, e);
		dialogue = "";
		cout << dialogue << endl;
		Max_hp = 20000;
		player_hp = 20000;
		enemy_hp = e[0].enemy_hp;
		skill_number = 4;
	}

	// Basic Fighting system
	while (playing) {
		double healing = 0;
		// handling the turn
		if (current_player == "Enemy") {
			// 
			int random_number = rand() % 100;
			//case of if enemy is Manus who has an extra skill
			calculating_damage(random_number, previous_skill, job, e, level, damage, healing, name);
			if (healing != 0) {
				enemy_hp += healing;
			}
			if (damage < 0) {
				enemy_hp -= damage;
			}
			else if (damage >= 0) {
				player_hp -= damage;
				if (player_hp < 0) {
					player_hp = 0;
				}
			}

			if (enemy_hp > e[0].enemy_hp)
				enemy_hp = e[0].enemy_hp;

			printing_status(enemy_hp, player_hp);

			current_player = "Player";

			cout << endl;
		}
		else if (current_player == "Player") {
			//show the option first
			//we assume that input is integer value only
			int input;
			cout << "It is your turn! Choose your skill (input the number of skill only!): " << endl;
			for (int i = 0; i < skill_number; i++) {
				cout << i + 1 << ". " << s[i].name << ": " << s[i].explanation << endl;
			}
			// we only get the integer input
			cin >> input;
			
			while (input < 1 || input-1 >= skill_number) {
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "invalid input! input again: ";
				
				cin >> input;
			}
			// input is appropriate
			input--;
			while (previous_skill == 3 && input == 3) {
				cout << "You already used your Ultimate! Cool time of one round is needed! Please choose other skill: ";
				cin >> input;
				while (input < 1 || input - 1 >= skill_number) {
					cin.clear();
					cin.ignore(10000, '\n');
					cout << "invalid input! input again: ";

					cin >> input;
				}
				
				input--;
			}
			previous_skill = input;
			
			cout << "You chose " << s[input].name << "!" << endl;

			// healing skill
			if (s[input].healing != 0) {
				player_hp += player_hp * s[input].healing;
		
				if (player_hp > Max_hp) {
					player_hp = Max_hp;
				}
				printing_status(enemy_hp, player_hp);
			}

			// attack skill
			else if (s[input].damage != 0) {
				enemy_hp -= s[input].damage;
				printing_status(enemy_hp, player_hp);
			}
			current_player = "Enemy";

			cout << endl;
			
		}
		check_game_done_hp(enemy_hp, player_hp, winner);
		
		check_game_done(playing, winner, level, skill_number);
	}
}
