#include <iostream>
#include <string>
// import randomized character selection function into main function.
#include "Gettinginput.h"
#include "Starting_game.h"

using namespace std;

int main() {
    char input = getting_input();
    // job = class
    string name, job, C_status = "Player_status.txt";
    int level(1), skill_number(2);
    "Hello Ma guys";
    starting_game(input, level, skill_number, job, C_status);
    return 0;
}
