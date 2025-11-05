#include <iostream>
using namespace std;

class Time {
    int hours;
    int minutes;

public:
    // Overload >> operator for input
    friend istream& operator>>(istream &in, Time &t) {
        cout << "Enter hours: ";
        in >> t.hours;
        cout << "Enter minutes: ";
        in >> t.minutes;

        // Convert minutes to proper hour:minute format
        if (t.minutes >= 60) {
            t.hours += t.minutes / 60;
            t.minutes = t.minutes % 60;
        }
        return in;
    }

    // Overload << operator for output
    friend ostream& operator<<(ostream &out, const Time &t) {
        out << "Time: " << t.hours << " hours " << t.minutes << " minutes";
        return out;
    }
};

int main() {
    Time t1;
    cin >> t1;
    cout << t1 << endl;
    return 0;
}
