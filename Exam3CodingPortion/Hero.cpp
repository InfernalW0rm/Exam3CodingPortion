#include "Hero.h"
#include <iostream>

Hero::Hero() : name(""), characterClass(nullptr) {}

Hero::Hero(const string& name, Class* characterClass) : name(name), characterClass(characterClass) {}

string Hero::getName() const { return name; }

void Hero::setName(const string& name) { this->name = name; }

Class* Hero::getClass() const { return characterClass; }

void Hero::setClass(Class* characterClass) { this->characterClass = characterClass; }

void Hero::act() const 
{
    cout << name;
    if (characterClass) {
        characterClass->attack();
    }
    else {
        cout << " has no class." << endl;
    }
}
