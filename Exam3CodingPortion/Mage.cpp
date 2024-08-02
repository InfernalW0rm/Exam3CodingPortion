#include "Mage.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Mage::Mage() : Class("Mage") 
{
    spellbook = { "Fireball", "Ice Spike", "Lightning Bolt" };
    srand(time(0));
}

void Mage::castSpell(const string& spell) const 
{
    cout << "casts a " << spell << "." << endl;
}

string Mage::pickSpell() const 
{
    return spellbook[rand() % spellbook.size()];
}

void Mage::attack() const 
{
    string spell = pickSpell();
    cout << ", the Mage, ";
    castSpell(spell);
}
