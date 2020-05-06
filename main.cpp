#include <iostream>
#include <string>
#include <ctime>
// import randomized character selection function into main function.
#include "Gettinginput.h"
#include "Starting_game.h"


using namespace std;

int main() {
    char input = getting_input();
    Skill s[4];
    // job = class
    string name, job, C_status = "Player_status.txt";
    int level(1), skill_number(2);
    starting_game(input, level, skill_number, job, C_status, name, s);
    return 0;
}
