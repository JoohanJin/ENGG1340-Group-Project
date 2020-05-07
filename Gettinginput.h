#include <iostream>

using namespace std;

char getting_input() {
	char input;
    // display the option that user can pick.
    cout << "input N to start a New Game" << endl;
    cout << "Previous savefile (if there is any) will be removed" << endl;
    cout << "input L to load Game" << endl;
    cout << "input E to exit the Game" << endl;
    cout << "input: ";
    // get the user input
    cin >> input;
    return input;
}
