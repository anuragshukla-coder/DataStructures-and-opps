//Question-2
#include <iostream>
using namespace std;

int main() {
    int n, pos;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the position of the element to delete: ";
    cin >> pos;

    if (pos < 0 || pos >= n) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    cout << "Array after deletion: ";
    for (int i = 0; i < n - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
