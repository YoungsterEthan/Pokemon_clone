#include <iostream>
#include "Charmander.h"
// #include "Pokemon.cpp"


using namespace std;

Charmander::Charmander()
{
    hp = 39;
    attack = 52;
    defense = 43;
    speed = 65;
}

int Charmander::moveScreen()
{
    cout << "1. Scratch" << endl;
    cout << "2. Fire Fang" << endl;
    cout << "3. Dragon Breath " << endl;
    cout << "4. Growl" << endl;
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