#include <iostream>
using namespace std;

class Rectangle {
    float length, width;

public:
    Rectangle() { 
        length = width = 1; 
    } // Default constructor

    Rectangle(float l, float w) { 
        length = l; 
        width = w; 
    }

    float area() { 
        return length * width; 
    }
};

int main() {
    Rectangle r1;             // Default
    Rectangle r2(5, 3);       // Parameterized
    cout << "Area of r1 = " << r1.area() << endl;
    cout << "Area of r2 = " << r2.area() << endl;
    return 0;
}
