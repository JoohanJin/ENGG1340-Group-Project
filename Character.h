#include <iostream>
#include <string>

using namespace std;

struct Skill {
	string name;
	int damage;
	int healing;
	string explanation;
};

void character_storing(string job, int skill_number) {
	Skill s[4];
	if (job == "Knight") {
		s[0].name = "Punch"; s[0].damage = 4000; s[0].healing = 0;
		s[0].explanation = "Just simple attack, exert 4000 damage";
		// decrease the damage from the enemy by 50%
		s[1].name = "Block"; s[1].damage = 0; s[1].healing = 0;
		s[1].explanation = "";
		s[2].name = "Stab"; s[2].damage = 8000; s[2].healing = 0;
		s[2].explanation = "";
		// ultiate cannot used in two consecutive rounds. (cool-time of one round needed)
		s[3].name = "Excalibur"; s[3].damage = 15000; s[3].healing = 0;
		s[3].explanation = "";
	}

	else if (job == "Paladin") {
		s[0].name = "Punch"; s[0].damage = 4000; s[0].healing = 0;
		s[0].explanation = "Just simple attack, exert 4000 damage";
		s[1].name = "Healing"; s[1].damage = 0; s[1].healing = 0; // heal 30% of current hp
		s[3].explanation = "";
		s[2].name = "Strike"; s[2].damage = 8000; s[2].healing = 0;
		s[3].explanation = "";
		s[3].name = "Shield bash"; s[3].damage = 15000; s[3].healing = 0;
		s[3].explanation = "";
	}

	else if (job == "Priest") {
		s[0].name = "Punch"; s[0].damage = 4000; s[0].healing = 0;
		s[0].explanation = "Just simple attack, exert 4000 damage";
		s[1].name = "Healing"; s[1].damage = 0; s[1].healing = 0; // add 30% of current hp to character's hp
		s[2].name = "Holy Light"; s[2].damage = 8000; s[2].healing = 0;
		s[3].name = "Judgement"; s[3].damage = 15000; s[3].healing = 0;
	}

	else if (job == "Wizard") {
		s[0].name = "Punch"; s[0].damage = 4000; s[0].healing = 0;
		s[0].explanation = "Just simple attack, exert 4000 damage";
		s[1].name = "Thorn Armor"; s[1].damage = 0; s[1].healing = 0; // 50% 1.5x damage and 50% reflect the damage
		s[2].name = "Fireball"; s[2].damage = 8000; s[2].healing = 0;
		s[3].name = "Lightning Bolt"; s[3].damage = 15000; s[3].healing = 0;
	}

	else if (job == "Thief") {
		s[0].name = "Punch"; s[0].damage = 4000; s[0].healing = 0;
		s[0].explanation = "Just simple attack, exert 4000 damage";
		s[1].name = "Dodge"; s[1].damage = 0; s[1].healing = 0;
		s[2].name = "Poison Vile"; s[2].damage = 8000; s[2].healing = 0;
		s[3].name = "Clong Attack"; s[3].damage = 15000; s[3].healing = 0;
	}
}
