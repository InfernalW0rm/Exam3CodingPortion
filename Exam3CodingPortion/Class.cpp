#include "Class.h"

Class::Class() : name("") {}

Class::Class(const string& name) : name(name) {}

string Class::getName() const { return name; }

void Class::setName(const string& name) { this->name = name; }
