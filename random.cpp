#include <iostream>
#include <string>
using namespace std;
int character_class()
{
    //variable to generate random number
    int randNum;
    string Job ="";
    string moves[5];
    //allow variation of number generation
    srand((int)time(0));
    //generation of random number
    randNum = rand()%5;
    //switch-case statement to decide class
    switch (randNum) {
        case 0:
        Job = "Knight";
        cout<<"You are a Knight";
        return Job;
        break;
        case 1:
        Job = "Paladin";
        cout<<"You are a Paladin";
        return Job;
        break;
        case 2:
        Job = "Priest";
        cout<<"You are a Priest";
        return Job;
        break;
        case 3:
        Job = "Wizard";
        cout<<"You are a Wizard";
        return Job;
        break;
        case 4:
        Job = "Thief";
        cout<<"You are a Thief";
        return Job;
        break;
    }
}
