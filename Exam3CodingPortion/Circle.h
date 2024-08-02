#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

using namespace std;

class Circle : public Shape 
{
public:
    Circle(Shape* innerShape = nullptr);

    string describe() const override;
};

#endif
