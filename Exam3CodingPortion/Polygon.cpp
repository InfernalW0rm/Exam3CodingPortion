#include "Polygon.h"

Polygon::Polygon(int numSides, const string& name, Shape* innerShape)
    : Shape(name, innerShape), numSides(numSides) {}

string Polygon::describe() const 
{
    return "a " + to_string(numSides) + "-sided " + name + " surrounding " + (innerShape ? innerShape->describe() : "a dot");
}
