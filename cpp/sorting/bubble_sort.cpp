/*
 * Bubble Sort Algorithm
 * 
 * Description:
 * Bubble sort is a simple sorting algorithm that repeatedly steps through the list,
 * compares adjacent elements and swaps them if they are in the wrong order.
 * The pass through the list is repeated until the list is sorted.
 * 
 * Time Complexity: O(n^2) - where n is the number of elements
 * Space Complexity: O(1) - sorts in place
 * 
 * Best Case: O(n) - when array is already sorted (with optimization)
 * Worst Case: O(n^2) - when array is reverse sorted
 */

#include <iostream>
#include <vector>
using namespace std;

/**
 * Sorts a vector using bubble sort algorithm
 * @param arr: vector to be sorted (passed by reference)
 */
void bubble_sort(vector<int>& arr) {
    int n = arr.size();
    
    // Edge case: empty or single element array
    if (n <= 1) {
        return;
    }
    
    bool swapped;
    
    // Outer loop for each pass
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        
        // Inner loop for comparing adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if current element is greater than next
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        
        // If no swaps occurred, array is sorted
        if (!swapped) {
            break;
        }
    }
}

/**
 * Prints a vector
 * @param arr: vector to print
 */
void print_vector(const vector<int>& arr) {
    cout << "[";
    for (size_t i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i < arr.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

// Example usage and test cases
int main() {
    cout << "=== Bubble Sort Examples ===" << endl << endl;
    
    // Test Case 1: Normal case
    vector<int> arr1 = {64, 34, 25, 12, 22, 11, 90};
    cout << "Test 1 - Normal case:" << endl;
    cout << "Before: ";
    print_vector(arr1);
    bubble_sort(arr1);
    cout << "After:  ";
    print_vector(arr1);
    cout << endl;
    
    // Test Case 2: Already sorted
    vector<int> arr2 = {1, 2, 3, 4, 5};
    cout << "Test 2 - Already sorted:" << endl;
    cout << "Before: ";
    print_vector(arr2);
    bubble_sort(arr2);
    cout << "After:  ";
    print_vector(arr2);
    cout << endl;
    
    // Test Case 3: Reverse sorted
    vector<int> arr3 = {5, 4, 3, 2, 1};
    cout << "Test 3 - Reverse sorted:" << endl;
    cout << "Before: ";
    print_vector(arr3);
    bubble_sort(arr3);
    cout << "After:  ";
    print_vector(arr3);
    cout << endl;
    
    // Test Case 4: Single element
    vector<int> arr4 = {42};
    cout << "Test 4 - Single element:" << endl;
    cout << "Before: ";
    print_vector(arr4);
    bubble_sort(arr4);
    cout << "After:  ";
    print_vector(arr4);
    cout << endl;
    
    // Test Case 5: Empty array
    vector<int> arr5 = {};
    cout << "Test 5 - Empty array:" << endl;
    cout << "Before: ";
    print_vector(arr5);
    bubble_sort(arr5);
    cout << "After:  ";
    print_vector(arr5);
    cout << endl;
    
    // Test Case 6: Duplicate elements
    vector<int> arr6 = {3, 5, 1, 3, 2, 5, 1};
    cout << "Test 6 - Duplicate elements:" << endl;
    cout << "Before: ";
    print_vector(arr6);
    bubble_sort(arr6);
    cout << "After:  ";
    print_vector(arr6);
    cout << endl;
    
    return 0;
}

