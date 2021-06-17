#include <iostream>
#include "Pokemon.h"

using namespace std;

int Pokemon::get_hp() const
{
    return hp;
}

int Pokemon::get_attack() const
{
    return attack;
}

int Pokemon::get_speed() const
{
    return speed;
}

int Pokemon::get_defense() const
{
    return defense;
}

int Pokemon::moveScreen()
{
    cout << "This is fake";
}