#ifndef POKEMON_H
#define POKEMON_H

class Pokemon
{
    protected:
    int hp, attack, defense, speed, level;

    public:
    int get_hp() const;
    int get_attack() const;
    int get_defense() const;
    int get_speed() const;
    virtual int moveScreen();
};

#endif