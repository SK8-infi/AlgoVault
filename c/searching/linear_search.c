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

#include <stdio.h>

/**
 * Performs linear search on an array
 * @param arr: array to search in
 * @param size: size of the array
 * @param target: element to search for
 * @return: index of the element if found, -1 otherwise
 */
int linear_search(int arr[], int size, int target) {
    // Edge case: empty array
    if (size == 0) {
        return -1;
    }
    
    // Iterate through each element
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Element found, return index
        }
    }
    
    return -1;  // Element not found
}

// Example usage and test cases
int main() {
    printf("=== Linear Search Examples ===\n\n");
    
    // Test Case 1: Normal case
    int arr1[] = {10, 23, 45, 70, 11, 15};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int target1 = 70;
    int result1 = linear_search(arr1, size1, target1);
    printf("Test 1 - Normal case:\n");
    printf("Array: [10, 23, 45, 70, 11, 15]\n");
    printf("Target: %d\n", target1);
    printf("Result: %s at index %d\n\n", 
           result1 != -1 ? "Found" : "Not Found", result1);
    
    // Test Case 2: Element not present
    int target2 = 100;
    int result2 = linear_search(arr1, size1, target2);
    printf("Test 2 - Element not present:\n");
    printf("Array: [10, 23, 45, 70, 11, 15]\n");
    printf("Target: %d\n", target2);
    printf("Result: %s\n\n", result2 != -1 ? "Found" : "Not Found");
    
    // Test Case 3: Single element (found)
    int arr3[] = {42};
    int size3 = 1;
    int target3 = 42;
    int result3 = linear_search(arr3, size3, target3);
    printf("Test 3 - Single element (found):\n");
    printf("Array: [42]\n");
    printf("Target: %d\n", target3);
    printf("Result: %s at index %d\n\n", 
           result3 != -1 ? "Found" : "Not Found", result3);
    
    // Test Case 4: Single element (not found)
    int target4 = 10;
    int result4 = linear_search(arr3, size3, target4);
    printf("Test 4 - Single element (not found):\n");
    printf("Array: [42]\n");
    printf("Target: %d\n", target4);
    printf("Result: %s\n\n", result4 != -1 ? "Found" : "Not Found");
    
    // Test Case 5: Empty array
    int arr5[] = {};
    int size5 = 0;
    int target5 = 10;
    int result5 = linear_search(arr5, size5, target5);
    printf("Test 5 - Empty array:\n");
    printf("Array: []\n");
    printf("Target: %d\n", target5);
    printf("Result: %s\n\n", result5 != -1 ? "Found" : "Not Found");
    
    // Test Case 6: First element
    int target6 = 10;
    int result6 = linear_search(arr1, size1, target6);
    printf("Test 6 - First element:\n");
    printf("Array: [10, 23, 45, 70, 11, 15]\n");
    printf("Target: %d\n", target6);
    printf("Result: %s at index %d\n\n", 
           result6 != -1 ? "Found" : "Not Found", result6);
    
    return 0;
}

