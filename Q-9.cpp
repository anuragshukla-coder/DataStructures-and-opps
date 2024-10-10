//Question-9
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Two sum problem :
vector<int> two_sum(vector<int>& arr, int target) {
    // Used to store the index of numbers
    unordered_map<int, int> num_map;
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];
        if (num_map.find(complement) != num_map.end()) {
            ans.push_back(num_map[complement]);
            ans.push_back(i);
            break;
        }
        num_map[arr[i]] = i;
    }
    
    return ans;
}

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> final_result = two_sum(arr, target);
    
    if (!final_result.empty()) {
        cout << "Index of the elements are : ";
        for (int i = 0; i < final_result.size(); i++) {
            cout << final_result[i] << " ";
        }
    } else {
        cout << "No solution found.";
    }
    
    return 0;
}
