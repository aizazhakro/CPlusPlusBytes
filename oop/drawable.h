#include <iostream>
using namespace std;

class Drawable {
    public:
    virtual void draw() = 0;
    ~Drawable() {
        cout << "Drawable deleted" << endl;
    }
};