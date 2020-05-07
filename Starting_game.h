#include <iostream>
#include <fstream>
#include <string>
#include "Character.h"
#include "random.h"


using namespace std;

void starting_game(char input, int &level, int &skill_number, string &job, string file_name, string &name, Skill s[4]) {
    while (true) {
        // if ( input == 'N'), Make a new character
        if (input == 'N') {
            cout << "Enter Your Name (your name should be one word): ";
            cin >> name;
            job = character_class();
            character_storing(job, skill_number, s);
            ofstream character;
            character.open(file_name);
            character << name << " " << job << " " << level << " " << skill_number;
            character.close();
            break;
        }

        // if ( input == 'L'), load character file
        else if (input == 'L') {
            ifstream character;
            character.open(file_name);
            // if Player_status.txt does not exist --> print error message and get the input one more time
            if (character.fail()) {
                cout << "No Character Exists" << endl;
                cout << "input again: ";
                cin >> input;
            }

            // if Player_status.txt exist --> load the text file
            else {
                // load the game
                character >> name >> job >> level >> skill_number;
                character.close();
                // get the job and skills
                character_storing(job, skill_number, s);
                cout << "You are " << job << endl;;
                break;
            }
        }

        // if ( input == 'E'), terminate the program
        else if (input == 'E') {
            cout << "BYE BYE" << endl;
            exit(1);
            break;
        }

        else {
            cout << "invalid input" << endl;
            cout << "Input again: ";
            cin >> input;
        }
    }
}
