#include <iostream>
using namespace std;

template <class T>
void sortArray(T arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

template <class T>
void display(T arr[], int n) {
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;

    // Sorting integer array
    int iArr[] = {5, 2, 9, 1, 3};
    n = 5;
    sortArray(iArr, n);
    cout << "Sorted Integers: ";
    display(iArr, n);

    // Sorting float array
    float fArr[] = {3.5f, 1.2f, 4.8f, 2.9f};
    n = 4;
    sortArray(fArr, n);
    cout << "Sorted Floats: ";
    display(fArr, n);

    // Sorting character array
    char cArr[] = {'z', 'a', 'k', 'b'};
    n = 4;
    sortArray(cArr, n);
    cout << "Sorted Characters: ";
    display(cArr, n);

    return 0;
}