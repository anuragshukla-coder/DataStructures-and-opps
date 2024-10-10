//Question-10
#include <iostream>
#include <vector>
using namespace std;

void segregateArray(vector<int>& arr) {
    vector<int> evens, odds;

    // Separate even and odd numbers
    for (int num : arr) {
        if (num % 2 == 0) {
            evens.push_back(num);
        } else {
            odds.push_back(num);
        }
    }

    // Combine the even and odd numbers, preserving their relative order
    arr.clear();
    arr.insert(arr.end(), evens.begin(), evens.end());
    arr.insert(arr.end(), odds.begin(), odds.end());
}

int main() {
    vector<int> arr = {12, 34, 45, 9, 8, 90, 3};

    segregateArray(arr);

    cout << "Segregated array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
