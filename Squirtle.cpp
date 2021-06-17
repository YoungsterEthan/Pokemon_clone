#include <iostream>
#include "Squirtle.h"
// #include "Pokemon.cpp"
using namespace std;

Squirtle::Squirtle() 
{
    hp = 44;
    attack = 48;
    defense = 65;
    speed = 43;
}

int Squirtle::moveScreen()
{
    cout << "1. Tail Whip" << endl;
    cout << "2. Water Gun" << endl;
    cout << "3. Rapid Spin" << endl;
    cout << "4. Aqua Tail" << endl;
    cout << endl;

    string move;
    bool isSuccess = true;
    do {
        try {
            cout << "Choose your next move:  " << endl;
            cin >> move;
            int i = stoi(move);
            return i;
        } 
        catch(exception)
        {
            cout << "Not valid input. You must enter in a number" << endl;
            isSuccess = false;
        }
    } while(!isSuccess);
}