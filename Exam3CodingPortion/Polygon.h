#ifndef POLYGON_H
#define POLYGON_H

#include "Shape.h"

using namespace std;

class Polygon : public Shape 
{
private:
    int numSides;

public:
    Polygon(int numSides, const string& name = "polygon", Shape* innerShape = nullptr);

    string describe() const override;
};

#endif
