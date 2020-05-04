#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

struct Skill {
	string name;
	int damage;
	int healing;
};

void character_storing(string job, int skill_number) {
	Skill s[4];
	if (job == "Knight") {
		s[0].name = "Punch"; s[0].damage = 4000;
		// decrease the damage from the enemy by 50%
		s[1].name = "Block"; s[1].damage = 0;
		s[2].name = "Stab"; s[2].damage = 8000;
		// ultiate cannot used in two consecutive rounds. (cool-time of one round needed)
		s[3].name = "Excalibur"; s[3].damage = 15000;
		cout << "Choose your skills:\n";
		for (int i = 0; i < skill_number; i++)
			cout << s[i].name << endl;
	}
	
	else if (job == "Paladin") {
		s[0].name = "Punch"; s[0].damage = 4000;
		s[1].name = "Healing"; // add 30% of current hp to character's hp
		s[2].name = "Strike"; s[2].damage = 8000;
		s[3].name = "Shield bash"; s[3].damage = 15000;
	}

	else if (job == "Priest") {
		s[0].name = "Punch"; s[0].damage = 4000;
	}

	else if (job == "Wizard") {
		s[0].name = "Punch"; s[0].damage = 4000;
	}

	else if (job == "Thief") {
		s[0].name = "Punch"; s[0].damage = 4000;
	}
}