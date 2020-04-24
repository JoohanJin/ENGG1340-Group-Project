#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// main.cpp file for main game playing
int main() {
    char input;
    string name;
    // display the option that user can pick.
    cout << "input N to start a New Game" << endl;
    cout << "input L to load Game" << endl;
    cout << "input E to exit the Game" << endl;

    // get the user input
    cin >> input;

    // if ( input == 'N'), Make a new character
    if (input = 'N') {
        getline(cin, name);
        ofstream output;
        output.open("");

    }

    // if ( input == 'L'), load character file

    // if ( input == 'E'), terminate the program
    else if (input == 'E') {
        cout << "BYE BYE" << endl;
        // temporary
        exit(1);
    }


    return 0;
}
