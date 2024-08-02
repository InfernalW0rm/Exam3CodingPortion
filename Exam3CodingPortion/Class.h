#ifndef CLASS_H
#define CLASS_H

#include <string>

using namespace std;

class Class 
{
protected:
    string name;

public:
    Class();
    Class(const string& name);

    virtual ~Class() = default;

    string getName() const;
    void setName(const string& name);

    virtual void attack() const = 0;
};

#endif
