#include <iostream>
#include <string>
#include "time.h"
using namespace std;

string character_class(){
    //variable to generate random number
    int randNum;
    string Job = "";
    string moves[5];
    //allow variation of number generation
    srand((int)time(0));
    //generation of random number
    randNum = rand() % 5;
    //switch-case statement to decide class
    switch (randNum) {
    case 0:
        Job = "Knight";
        cout << "You are a Knight" << endl;
        cout << "An obscure knight of poor renown who collapsed roaming the land. Sturdy, owing to high vitality and stout armor." << endl;
        return Job;
        break;
    case 1:
        Job = "Paladin";
        cout << "You are a Paladin" << endl;
        cout << "A former paladin who journeyed to finish a quest undertaken. Wields a sturdy spear and employs a gentle restorative miracle." << endl;
        return Job;
        break;
    case 2:
        Job = "Priest";
        cout << "You are a Priest" << endl;
        cout << "A traveling cleric who collapsed from exhaustion. Channels high faith to cast many and varied miracles." << endl;
        return Job;
        break;
    case 3:
        Job = "Wizard";
        cout << "You are a Wizard" << endl;
        cout << "A loner who left formal academia to pursue further research. Commands soul wizards using high intelligence." << endl;
        return Job;
        break;
    case 4:
        Job = "Thief";
        cout << "You are a Thief" << endl;
        cout << "A common thief and pitiful deserter. Wields a dagger intended for backstabs alongside a military-issue bow." << endl;
        return Job;
        break;
    }
}
