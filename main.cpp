#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
// import randomized character selection function into main function.
#include "Gettinginput.h"
#include "Starting_game.h"
#include "fighting.h"
#include "Title.h"

using namespace std;

int main() {
    print_title();
    char input = getting_input();
    Skill s[4];
    Enemy e[5];
    // job = class
    string name, job, C_status = "Player_status.txt", winner;
    int level(1), skill_number(2);
    starting_game(input, level, skill_number, job, C_status, name, s);

    cout << "You currently can use" << endl;
    for (int i = 0; i < skill_number; i++) {
        cout << s[i].name << ": " << s[i].explanation << endl;
    }
    cout << endl;

    string reply = "Yes";
    while (level < 6 && reply == "Yes") {
        winner = "None";
        vector<int> number_of_skills;
        int skill_1(0), skill_2(0), skill_3(0), skill_4(0);
        fighting(level, skill_number, job, s, winner, e, number_of_skills);

        if (winner == "Player") {
            // save the name class level and skill_number
            ofstream character;
            character.open(C_status);
            character << name << " " << job << " " << level << " " << skill_number;
            character.close();
            cout << endl;
            cout << "You have used " << number_of_skills.size() << " skills to defeat the enemy" << endl;
            for (int i = 0; i < number_of_skills.size(); i++) {
                if (number_of_skills[i] == 0)
                    skill_1 += 1;
                else if (number_of_skills[i] == 1)
                    skill_2 += 1;
                else if (number_of_skills[i] == 2)
                    skill_3 += 1;
                else if (number_of_skills[i] == 3)
                    skill_4 += 1;
            }
            if (skill_1 != 0)
                cout << "You have used skill 1 " << skill_1 << " times!" << endl;
            if (skill_2 != 0)
                cout << "You have used skill 2 " << skill_2 << " times!" << endl;
            if (skill_3 != 0)
                cout << "You have used skill 3 " << skill_3 << " times!" << endl;
            if (skill_4 != 0)
                cout << "You have used skill 4 " << skill_4 << " times!" << endl;
        }

        else if (winner == "Enemy") {
            cout << "Do you want to retry? (Yes or No): ";
            cin >> reply;
            cout << endl;
        }
        number_of_skills.clear();
    }

    if (level == 6) {
        cout << endl;
        cout << "Congratulations! You have completed all the tasks!" << endl;
    }

    else {
        cout << "BYEBYE" << endl;
        exit(1);
    }

    return 0;
}
