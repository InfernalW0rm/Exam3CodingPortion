#ifndef MAGE_H
#define MAGE_H

#include "Class.h"
#include <vector>
#include <string>

using namespace std;

class Mage : public Class 
{
private:
    vector<string> spellbook;

public:
    Mage();

    void castSpell(const string& spell) const;
    string pickSpell() const;
    void attack() const override;
};

#endif
