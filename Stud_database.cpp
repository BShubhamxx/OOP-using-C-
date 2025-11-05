#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Academic {
public:
    int roll;
    int marks1, marks2, marks3;
};

class Student : public Person, public Academic {
public:
    void input() {
        cout << "Enter name, age, roll and 3 marks: ";
        cin >> name >> age >> roll >> marks1 >> marks2 >> marks3;
    }
    void display() {
        int total = marks1 + marks2 + marks3;
        float per = total / 3.0;
        cout << "\nName: " << name << "\nTotal: " << total << "\nPercentage: " << per << "%\n";
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
