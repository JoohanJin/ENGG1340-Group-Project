#include <iostream>
#include <string>
#include <fstream>
using namespace std;
//enemy struct
struct Enemy {
	string name;
	int enemy_hp;
	string move;
	int damage;
	int healing;
};

void enemy_information(string name, Enemy enemy[5]) {
	//specification of enemy depending on name
	if (name == "Sulyvahn") {
		enemy[0].enemy_hp = 20000;
		enemy[1].move = "Fireball"; enemy[1].damage = 500;
		enemy[2].move = "Eclipse";  enemy[2].damage = 2000;
	}
	else if (name == "Lorian") {
		enemy[0].enemy_hp = 30000;
		enemy[1].move = "Stab"; enemy[1].damage = 1000;
		enemy[2].move = "Slash"; enemy[2].damage = 2000;
	}
	else if (name == "Lothric") {
		enemy[0].enemy_hp = 25000;
		enemy[1].move = "Curse"; enemy[1].damage = 1000;
		enemy[2].move = "Shadow"; enemy[2].damage = 2000; enemy[2].healing = 1000;
	}
	else if (name == "Artorias") {
		enemy[0].enemy_hp = 40000;
		enemy[1].move = "Dance"; enemy[1].damage = 1000;
		enemy[2].move = "Whisper"; enemy[2].damage = 5000;
	}
	else if (name == "Manus") {
		enemy[0].enemy_hp = 50000;
		enemy[1].move = "Clutches"; enemy[2].damage = 1000;
		enemy[2].move = "Downward"; enemy[3].damage = 2000;
		enemy[3].move = "Last"; enemy[4].damage = 30000;
	}
}
