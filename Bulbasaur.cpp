#include <iostream>
#include "Bulbasaur.h"
// #include "Pokemon.cpp"


using namespace std;

Bulbasaur::Bulbasaur()
{
    hp = 45;
    attack = 49;
    defense = 49;
    speed = 45;
}

int Bulbasaur::moveScreen()
{
    cout << "1. Tackle" << endl;
    cout << "2. Vine Whip" << endl;
    cout << "3. Razor Leaf" << endl;
    cout << "4. Growth" << endl;
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