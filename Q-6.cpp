//Question-5
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int first_largest, second_largest;
    if (arr[0] > arr[1]) {
        first_largest = arr[0];
        second_largest = arr[1];
    } else {
        first_largest = arr[1];
        second_largest = arr[0];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > first_largest) {
            second_largest = first_largest;
            first_largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != first_largest) {
            second_largest = arr[i];
        }
    }

    cout << "Second largest element: " << second_largest << endl;

    return 0;
}
