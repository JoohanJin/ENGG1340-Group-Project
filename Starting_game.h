#include <iostream>
#include <fstream>
#include <string>
#include "Character.h"
#include "random.h"

using namespace std;

void starting_game(char input, int level, int skill_number, string job, string file_name) {
    string name;

    while (true) {
        // if ( input == 'N'), Make a new character
        if (input == 'N') {
            cout << "Enter Your Name (your name should be one word): ";
            cin >> name;
            job = character_class();
            ofstream character;
            character.open(file_name);
            character << name << endl;
            character << job << endl;
            character << level << endl;
            character << skill_number << endl;
            character_storing(job, skill_number);
            character.close();
            break;
        }

        // if ( input == 'L'), load character file
        else if (input == 'L') {
            ifstream character(file_name);
            // if Player_status.txt does not exist --> print error message and get the input one more time
            if (character.fail()) {
                cout << "No Character Exists" << endl;
                cin >> input;
            }

            // if Player_status.txt exist --> load the text file
            else {

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