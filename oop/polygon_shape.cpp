#include "polygon_shape.h"
#include <iostream>
using namespace std;

PolygonShape::PolygonShape(int numSides) {
    sides = numSides;
}

int PolygonShape::numberOfSides() {
    return sides;
}

string PolygonShape::name() {
    return "Polygon Shape";
}

void PolygonShape::draw() {

}

PolygonShape::~PolygonShape() {
    cout << "PolygonShape deleted" << endl;
}