#include "drawable.h"
#include <string>

using namespace std;
class Shape : public Drawable {
    public:
    virtual string name();
    ~Shape();
};