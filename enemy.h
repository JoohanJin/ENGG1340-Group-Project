#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
	struct Enemy {
		string name;
		int hp;
		string moveA;
		string moveB;
		string moveC;
		int level;
	};

	Enemy enemy_information(string name) {
		Enemy enemy;
		if (name == Sulyvahn) {
			enemy.hp = 20000;
			enemy.moveA = "Fireball";
			enemy.moveB = "Eclipse";
			enemy.level = 1;
		}
		else if (name == Lorian) {
			enemy.hp = 30000;
			enemy.moveA = "Stab";
			enemy.moveB = "Slash";
			enemy.level = 2;
		}
		else if (name == Lothric) {
			enemy.hp = 25000;
			enemy.moveA = "Curse";
			enemy.moveB = "Shadow";
		
		}
		else if (name == Artorias) {
			enemy.hp = 40000;
			enemy.moveA = "Dance";
			enemy.moveB = "Whisper";
			enemy.level = 3;
		}
		else if (name == Manus) {
			enemy.hp = 50000;
			enemy.moveA = "Clutches";
			enemy.moveB = "Downward";
			enemy.moveC = "Last";
			enemy.level = 4;
		}
	}
	

	
}
