#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int marks;

    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << name << " - " << marks << endl;
    }
};

// Function 1: Sort by name (alphabetical order)
void sort(Student s[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (s[j].name > s[j + 1].name) {
                Student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}

// Function 2: Sort by marks (descending order)
void sort(Student s[], int n, int dummy) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (s[j].marks < s[j + 1].marks) {
                Student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[50]; // fixed-size array for simplicity

    cout << "\nEnter student details:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        s[i].input();
    }

    // Sort and display by Name
    sort(s, n);
    cout << "\n--- Students Sorted by Name (Alphabetical) ---\n";
    for (int i = 0; i < n; i++)
        s[i].display();

    // Sort and display by Marks
    sort(s, n, 1);
    cout << "\n--- Students Sorted by Marks (Descending) ---\n";
    for (int i = 0; i < n; i++)
        s[i].display();

    return 0;
}
