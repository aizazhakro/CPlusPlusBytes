#include <iostream>
#include "polygon_shape.h"


int main() {
    {
        PolygonShape d(4);
        cout << "Total sides in this " << d.name() << " is " << d.numberOfSides() << std::endl;
    }
    cout << "Done" << endl;
    return 0;
}