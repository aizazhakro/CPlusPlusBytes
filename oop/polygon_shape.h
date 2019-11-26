#include "shape.h"

class PolygonShape : public Shape {
    private:
        PolygonShape();
        int sides;
    
    public:
        PolygonShape(int numSides);
        int numberOfSides();
        virtual void draw();
        virtual string name();
        ~PolygonShape();
};