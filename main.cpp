#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    char input;
    // job = class
    string name, job = "Knight";
    int skill_number(2);
    // display the option that user can pick.
    cout << "input N to start a New Game" << endl;
    cout << "Previous savefile (if there is any) will be removed" << endl;
    cout << "input L to load Game" << endl;
    cout << "input E to exit the Game" << endl;

    // get the user input
    cin >> input;

    while (true) {
        // if ( input == 'N'), Make a new character
        if (input == 'N') {
            cout << "Enter Your Name (your name should be one word): ";
            cin >> name;
            ofstream character;
            character.open("Character/Player_status.txt");
            character << name << endl;
            character << job << endl;
            character << skill_number << endl;
            break;
        }

        // if ( input == 'L'), load character file

        // if ( input == 'E'), terminate the program
        else if (input == 'E') {
            cout << "BYE BYE" << endl;
            break;
            // temporary
            exit(1);
        }

        else {
            cout << "invalid input" << endl;
            cout << "Input again: ";
            cin >> input;
        }
    }

    return 0;
}
