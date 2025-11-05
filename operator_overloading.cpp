#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v) { 
        value = v; 
    }

    void display() { 
        cout << "Value: " << value << endl; 
    }

    // Member function
    Number operator++() {
        value += 100;
        return *this;
    }

    // Friend function
    friend Number operator++(Number &n, int);
};

Number operator++(Number &n, int) {
    n.value += 100;
    return n;
}

int main() {
    Number n(200);
    ++n;     // Member
    n.display();
    n++;     // Friend
    n.display();
    return 0;
}
