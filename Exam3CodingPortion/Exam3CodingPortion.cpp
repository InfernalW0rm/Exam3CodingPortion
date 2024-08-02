#include <iostream>
#include "Mage.h"
#include "Warrior.h"
#include "Hero.h"
#include "Circle.h"
#include "Polygon.h"

using namespace std;

int main() 
{
    //Part 1
    Mage mage;
    Warrior warrior;

    Hero hero1("Gandalf", &mage);
    Hero hero2("Aragorn", &warrior);

    hero1.act();
    hero2.act();

    //Part 2
    Shape dot;

    Circle circle1(&dot);
    Circle circle2(&circle1);
    Polygon square(4, "square", &circle2);

    Shape* shape1 = &square;
    cout << shape1->describe() << endl;

    Polygon triangle(3, "triangle", &dot);
    Polygon pentagon(5, "pentagon", &triangle);
    Polygon square2(4, "square", &pentagon);
    Circle circle3(&square2);

    Shape* shape2 = &circle3;
    cout << shape2->describe() << endl;

    return 0;
}
