#include "Warrior.h"
#include <iostream>

Warrior::Warrior() : Class("Warrior"), weapon("Sword") {}

void Warrior::attack() const 
{
    cout << ", the Warrior, swings their " << weapon << "." << endl;
}

string Warrior::getWeapon() const { return weapon; }

void Warrior::setWeapon(const string& weapon) { this->weapon = weapon; }
