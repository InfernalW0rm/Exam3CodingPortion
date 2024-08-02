#ifndef WARRIOR_H
#define WARRIOR_H

#include "Class.h"
#include <string>

using namespace std;

class Warrior : public Class 
{
private:
    string weapon;

public:
    Warrior();

    void attack() const override;
    string getWeapon() const;
    void setWeapon(const string& weapon);
};

#endif
