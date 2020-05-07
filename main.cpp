#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
// import randomized character selection function into main function.
#include "Gettinginput.h"
#include "Starting_game.h"


using namespace std;

int main() {
    char input = getting_input();
    Skill s[4];
    // job = class
    string name, job, C_status = "Player_status.txt", winner;
    int level(1), skill_number(2);
    starting_game(input, level, skill_number, job, C_status, name, s);

    cout << "You currently can use" << endl;
    for (int i = 0; i < skill_number; i++) {
        cout << s[i].name << ": " << s[i].explanation << endl;
    }

    string reply = "Yes";
    while (level < 6 && reply == "Yes") {

        if (winner == "Player") {
            // save the name class level and skill_number
            ofstream character;
            character.open("Player_status.txt");
            character << name << " " << job << " " << level << " " << skill_number;
            character.close();
        }

        else if (winner == "Enemy") {
            cout << "Do you want to retry? (Yes or No): ";
            cin >> reply;
        }
    }

    if (level == 6) {
        cout << "Congratulations! You have completed all the tasks!" << endl;
    }
    
    else {
        cout << "BYEBYE" << endl;
        exit(1);
    }

    return 0;
}
