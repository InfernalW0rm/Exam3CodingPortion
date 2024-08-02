#ifndef SHAPE_H
#define SHAPE_H

#include <string>

using namespace std;

class Shape 
{
protected:
    string name;
    Shape* innerShape;

public:
    Shape();
    Shape(const string& name, Shape* innerShape = nullptr);

    virtual ~Shape() = default;

    string getName() const;
    Shape* getInnerShape() const;

    virtual string describe() const;
};

#endif
