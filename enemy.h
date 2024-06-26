#include <iostream>
#include <string>

using namespace std;

//enemy struct
struct Enemy {
	string name;
	double enemy_hp;
	string move;
	double damage;
	double healing;
};

void enemy_information(string name, Enemy enemy[5]) {
	//specification of enemy depending on name
	if (name == "Sulyvahn") {
		enemy[0].enemy_hp = 20000;
		enemy[1].move = "Fireball of the Sinner"; enemy[1].damage = 500;
		enemy[2].move = "Eclipse of the Damned";  enemy[2].damage = 2000;
	}
	else if (name == "Lorian") {
		enemy[0].enemy_hp = 30000;
		enemy[1].move = "Stab of Darkness"; enemy[1].damage = 1000;
		enemy[2].move = "Slash from the Shadow"; enemy[2].damage = 2000;
	}
	else if (name == "Lothric") {
		enemy[0].enemy_hp = 25000;
		enemy[1].move = "Curse from the Devil"; enemy[1].damage = 1000;
		enemy[2].move = "Shadow of the Spirit"; enemy[2].damage = 2000; enemy[2].healing = 1000;
	}
	else if (name == "Artorias") {
		enemy[0].enemy_hp = 40000;
		enemy[1].move = "Dance of the Blades"; enemy[1].damage = 1000;
		enemy[2].move = "Whisper of The Abyss"; enemy[2].damage = 5000;
	}
	else if (name == "Manus") {
		enemy[0].enemy_hp = 50000;
		enemy[1].move = "Clutches of the Abyss"; enemy[1].damage = 1000;
		enemy[2].move = "Downward Blow"; enemy[2].damage = 2000;
		enemy[3].move = "Last Resort"; enemy[3].damage = 50000;
	}
}
