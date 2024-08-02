#include "Shape.h"

Shape::Shape() : name("Dot"), innerShape(nullptr) {}

Shape::Shape(const string& name, Shape* innerShape) : name(name), innerShape(innerShape) {}

string Shape::getName() const { return name; }

Shape* Shape::getInnerShape() const { return innerShape; }

string Shape::describe() const 
{
    return "a dot";
}
