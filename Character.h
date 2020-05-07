#include <iostream>
#include <string>

using namespace std;

struct Skill {
	string name;
	double damage;
	double healing;
	string explanation;
};

void character_storing(string job, int skill_number, Skill s[4]) {
	if (job == "Knight") {
		s[0].name = "Punch"; s[0].damage = 4000; s[0].healing = 0;
		s[0].explanation = "Just simple attack, 4000 damage";
		// decrease the damage from the enemy by50%
		s[1].name = "Block"; s[1].damage = 0; s[1].healing = 0;
		s[1].explanation = "Block the attack with Titan Shield. 50% of damage reduction";
		s[2].name = "Stab"; s[2].damage = 8000; s[2].healing = 0;
		s[2].explanation = "Knight's special attack, stab the enemy with Titan Sword, 8000 damage";
		// ultiate cannot used in two consecutive rounds. (cool-time of one round needed)
		s[3].name = "Excalibur"; s[3].damage = 15000; s[3].healing = 0;
		s[3].explanation = "Knight's ultimate ability, summon Excalibur, the legendary weapon, to attack the enemy. 15000 damage";
	}

	else if (job == "Paladin") {
		s[0].name = "Punch"; s[0].damage = 4000; s[0].healing = 0;
		s[0].explanation = "Just simple attack, 4000 damage";
		s[1].name = "Healing"; s[1].damage = 0; s[1].healing = 0.3; // heal 30% of current hp
		s[1].explanation = "Heal by 30% of the current hp";
		s[2].name = "Strike"; s[2].damage = 8000; s[2].healing = 0;
		s[2].explanation = "Paladin's special attack, heat the enemy with strong Spike, 8000 damage";
		s[3].name = "Shield bash"; s[3].damage = 15000; s[3].healing = 0;
		s[3].explanation = "Paladin's ultimate attack, bash holy shield to stun enemy. Final execution will be followed. 15000 damage";
	}

	else if (job == "Priest") {
		s[0].name = "Punch"; s[0].damage = 4000; s[0].healing = 0;
		s[0].explanation = "Just simple attack, 4000 damage";
		s[1].name = "Healing"; s[1].damage = 0; s[1].healing = 0.3; // add 30% of current hp to character's hp
		s[1].explanation = "Heal by 30% of the current hp";
		s[2].name = "Holy Light"; s[2].damage = 8000; s[2].healing = 0;
		s[2].explanation = "Priest's special attack, using holy light to burn the enemy. 8000 damage";
		s[3].name = "Judgement"; s[3].damage = 15000; s[3].healing = 0;
		s[3].explanation = "Use God's ability to punish the enemy. 15000 damage";
	}

	else if (job == "Wizard") {
		s[0].name = "Punch"; s[0].damage = 4000; s[0].healing = 0;
		s[0].explanation = "Just simple attack, 4000 damage";
		s[1].name = "Thorn Armor"; s[1].damage = 0; s[1].healing = 0; // 50% 1.5x damage and 50% reflect the damage
		s[1].explanation = "Wearing  Thorn Armor that reflect the damage to enemy, but if the armor is broken, damage taken by you will be greater. you will either reflect damage or get 1.5x damage more.";
		s[2].name = "Fireball"; s[2].damage = 8000; s[2].healing = 0;
		s[3].explanation = "Wizard's special attack, summon hell fire from the hell. 8000 damage";
		s[3].name = "Lightning Bolt"; s[3].damage = 15000; s[3].healing = 0;
	}

	else if (job == "Thief") {
		s[0].name = "Punch"; s[0].damage = 4000; s[0].healing = 0;
		s[0].explanation = "Just simple attack, 4000 damage";
		s[1].name = "Dodge"; s[1].damage = 0; s[1].healing = 0;
		s[1].explanation = "Dodge enemy's attack with quick step. You shell be careful otherwise, you will get hit. you will either dodge enemy's attack or get hit.";
		s[2].name = "Poison Vile"; s[2].damage = 8000; s[2].healing = 0;
		s[3].explanation = "Use poison, 8000 damage.";
		s[3].name = "Clone Attack"; s[3].damage = 15000; s[3].healing = 0;
		s[3].explanation = "Summon Clone to attack twice. 15000 damage";
	}
}
