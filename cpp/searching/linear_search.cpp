/*
 * Linear Search Algorithm
 * 
 * Description:
 * Linear search is the simplest searching algorithm that checks every element
 * in the array sequentially until the target element is found or the end is reached.
 * 
 * Time Complexity: O(n) - where n is the number of elements
 * Space Complexity: O(1) - no extra space required
 * 
 * Best Case: O(1) - element found at first position
 * Worst Case: O(n) - element at last position or not present
 */

#include <iostream>
#include <vector>
using namespace std;

/**
 * Performs linear search on a vector
 * @param arr: vector to search in
 * @param target: element to search for
 * @return: index of the element if found, -1 otherwise
 */
int linear_search(const vector<int>& arr, int target) {
    // Edge case: empty vector
    if (arr.empty()) {
        return -1;
    }
    
    // Iterate through each element
    for (size_t i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i;  // Element found, return index
        }
    }
    
    return -1;  // Element not found
}

// Example usage and test cases
int main() {
    cout << "=== Linear Search Examples ===" << endl << endl;
    
    // Test Case 1: Normal case
    vector<int> arr1 = {10, 23, 45, 70, 11, 15};
    int target1 = 70;
    int result1 = linear_search(arr1, target1);
    cout << "Test 1 - Normal case:" << endl;
    cout << "Array: [10, 23, 45, 70, 11, 15]" << endl;
    cout << "Target: " << target1 << endl;
    cout << "Result: " << (result1 != -1 ? "Found" : "Not Found");
    if (result1 != -1) cout << " at index " << result1;
    cout << endl << endl;
    
    // Test Case 2: Element not present
    int target2 = 100;
    int result2 = linear_search(arr1, target2);
    cout << "Test 2 - Element not present:" << endl;
    cout << "Array: [10, 23, 45, 70, 11, 15]" << endl;
    cout << "Target: " << target2 << endl;
    cout << "Result: " << (result2 != -1 ? "Found" : "Not Found") << endl << endl;
    
    // Test Case 3: Single element (found)
    vector<int> arr3 = {42};
    int target3 = 42;
    int result3 = linear_search(arr3, target3);
    cout << "Test 3 - Single element (found):" << endl;
    cout << "Array: [42]" << endl;
    cout << "Target: " << target3 << endl;
    cout << "Result: " << (result3 != -1 ? "Found" : "Not Found");
    if (result3 != -1) cout << " at index " << result3;
    cout << endl << endl;
    
    // Test Case 4: Single element (not found)
    int target4 = 10;
    int result4 = linear_search(arr3, target4);
    cout << "Test 4 - Single element (not found):" << endl;
    cout << "Array: [42]" << endl;
    cout << "Target: " << target4 << endl;
    cout << "Result: " << (result4 != -1 ? "Found" : "Not Found") << endl << endl;
    
    // Test Case 5: Empty array
    vector<int> arr5 = {};
    int target5 = 10;
    int result5 = linear_search(arr5, target5);
    cout << "Test 5 - Empty array:" << endl;
    cout << "Array: []" << endl;
    cout << "Target: " << target5 << endl;
    cout << "Result: " << (result5 != -1 ? "Found" : "Not Found") << endl << endl;
    
    // Test Case 6: First element
    int target6 = 10;
    int result6 = linear_search(arr1, target6);
    cout << "Test 6 - First element:" << endl;
    cout << "Array: [10, 23, 45, 70, 11, 15]" << endl;
    cout << "Target: " << target6 << endl;
    cout << "Result: " << (result6 != -1 ? "Found" : "Not Found");
    if (result6 != -1) cout << " at index " << result6;
    cout << endl << endl;
    
    return 0;
}

