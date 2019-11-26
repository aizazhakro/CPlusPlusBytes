#include "shape.h"
#include <iostream>

using namespace std;

string Shape::name() {
    return "Generic Shape";
}

Shape::~Shape() {
    cout << "Shape deleted" << endl;
}