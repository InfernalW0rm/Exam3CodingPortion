#ifndef HERO_H
#define HERO_H

#include "Class.h"
#include <string>

using namespace std;

class Hero 
{
private:
    string name;
    Class* characterClass;

public:
    Hero();
    Hero(const string& name, Class* characterClass);

    string getName() const;
    void setName(const string& name);

    Class* getClass() const;
    void setClass(Class* characterClass);

    void act() const;
};

#endif
