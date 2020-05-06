#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
	struct Enemy {
		string name;
		int hp;
		string move;
		int damage;
		int level;
		int healing;
	};

	Enemy enemy_information(string name) {
		Enemy enemy[5];
		if (name == Sulyvahn) {
			enemy[0].hp = 20000;
			enemy[1].level = 1;
			enemy[2].move = "Fireball"; enemy[1].damage = 500; ;
			enemy[3].move = "Eclipse";  enemy[2].damage = 2000;
			
		}
		else if (name == Lorian) {
			enemy[0].hp = 30000;
			enemy[1].level = 2;
			enemy[2].move = "Stab"; enemy[1].dmg = 1000;
			enemy[3].move = "Slash"; enemy[2].dmg = 2000;
			
		}
		else if (name == Lothric) {
			enemy[0].hp = 25000;
			enemy[1].move = "Curse";
			enemy[2].move = "Shadow";
		
		}
		else if (name == Artorias) {
			enemy[0].hp = 40000;
			enemy[1].level = 3;
			enemy[2].move = "Dance"; enemy[1].damage = 1000;
			enemy[3].move = "Whisper"; enemy[2].damage = 2000; enemy[2].healing = 1000;
			
		}
		else if (name == Manus) {
			enemy[0].hp = 50000;
			enemy[1].level = 4;
			enemy[2].move = "Clutches"; enemy[2].damage = 1000;
			enemy[3].move = "Downward"; enemy[3].damage = 2000;
			enemy[4].move = "Last"; enemy[4].damage = 30000;
			
		}
	}
	

	
}
