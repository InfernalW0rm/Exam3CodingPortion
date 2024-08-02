#include "Circle.h"

Circle::Circle(Shape* innerShape) : Shape("circle", innerShape) {}

string Circle::describe() const 
{
    return "a perfect circle surrounding " + (innerShape ? innerShape->describe() : "a dot");
}
