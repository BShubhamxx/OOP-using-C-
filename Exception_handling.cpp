#include <iostream>
#include <stdexcept>
using namespace std;

class handle{
    public:
    int arr[5] = {10, 20, 30, 40, 50};
    int index;

    int getdata(){
        cout << "Enter index (0-4): ";
        cin >> index;

        try {
            if (index < 0 || index >= 5)
                throw out_of_range("Index Out of Bounds!");
            cout << "Element = " << arr[index] << endl;
        } catch (out_of_range &e) {
        cout << "Error: " << e.what() << endl;
        }
    return 0;
    }
};
int main() {
    handle h;
    h.getdata();
}
