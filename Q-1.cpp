//Question-1
#include <iostream>
using namespace std;

int main() {
    int n, pos, element;

    cout << "Enter number of elements: ";
    cin >> n;
    
    int arr[n + 1];  // array of size n+1 to accommodate the new element
    
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the position to insert the new element: ";
    cin >> pos;
    
    if (pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        return 1;
    }
    
    cout << "Enter the new element: ";
    cin >> element;
    
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[pos] = element;
    
    cout << "Array after insertion: ";
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
