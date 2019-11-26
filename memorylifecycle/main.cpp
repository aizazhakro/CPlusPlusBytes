#include <iostream>
#include <string> 

using namespace std;

class GrandParent {
    protected:
        string message;
        GrandParent() {};
    public:
        GrandParent(string msg) { message = msg; };
        void setMessage(string msg) { message = msg; };
        void printMessage() { cout << message << endl; };
        virtual ~GrandParent() { cout << "Deleting GrandParent : " << message << endl; }
};

class Parent : public GrandParent {
    protected:
        Parent() {};
    public:
        Parent(string msg) : GrandParent(msg) {};
        virtual ~Parent() { cout << "Deleting Parent : " << message << endl; };
};

class Child : public Parent {
    protected:
        Child() {};
    public:
        Child(string msg) : Parent(msg) {};
        virtual ~Child() { cout << "Deleting Child : " << message << endl; }
};

void changeMessage(Child childObj, string msg) {
    childObj.setMessage(msg);
}

void changeMessagePtr(Child* childPtr, string msg) {
    childPtr->setMessage(msg);
}

void changeMessageRef(Child& childRef, string msg) {
    childRef.setMessage(msg);
}

int main() {
    // Pointers , Objects, References
    Child childObj("Child Object");
    Child childObjForRef("Child Reference");
    Child* childPtr = new Child("Child Pointer");
    Child& childRef = childObjForRef;

    changeMessage(childObj, "Changed Child Object");
    changeMessagePtr(childPtr, "Changed Child Pointer");
    changeMessageRef(childRef, "Changed Child Reference");

    delete childPtr;
    return 0;
}