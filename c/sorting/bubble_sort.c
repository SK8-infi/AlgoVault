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

#include <stdio.h>
#include <stdbool.h>

/**
 * Swaps two integers
 * @param a: pointer to first integer
 * @param b: pointer to second integer
 */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * Sorts an array using bubble sort algorithm
 * @param arr: array to be sorted
 * @param size: size of the array
 */
void bubble_sort(int arr[], int size) {
    // Edge case: empty or single element array
    if (size <= 1) {
        return;
    }
    
    bool swapped;
    
    // Outer loop for each pass
    for (int i = 0; i < size - 1; i++) {
        swapped = false;
        
        // Inner loop for comparing adjacent elements
        for (int j = 0; j < size - i - 1; j++) {
            // Swap if current element is greater than next
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
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
 * Prints an array
 * @param arr: array to print
 * @param size: size of the array
 */
void print_array(int arr[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

// Example usage and test cases
int main() {
    printf("=== Bubble Sort Examples ===\n\n");
    
    // Test Case 1: Normal case
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Test 1 - Normal case:\n");
    printf("Before: ");
    print_array(arr1, size1);
    bubble_sort(arr1, size1);
    printf("After:  ");
    print_array(arr1, size1);
    printf("\n");
    
    // Test Case 2: Already sorted
    int arr2[] = {1, 2, 3, 4, 5};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Test 2 - Already sorted:\n");
    printf("Before: ");
    print_array(arr2, size2);
    bubble_sort(arr2, size2);
    printf("After:  ");
    print_array(arr2, size2);
    printf("\n");
    
    // Test Case 3: Reverse sorted
    int arr3[] = {5, 4, 3, 2, 1};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Test 3 - Reverse sorted:\n");
    printf("Before: ");
    print_array(arr3, size3);
    bubble_sort(arr3, size3);
    printf("After:  ");
    print_array(arr3, size3);
    printf("\n");
    
    // Test Case 4: Single element
    int arr4[] = {42};
    int size4 = 1;
    printf("Test 4 - Single element:\n");
    printf("Before: ");
    print_array(arr4, size4);
    bubble_sort(arr4, size4);
    printf("After:  ");
    print_array(arr4, size4);
    printf("\n");
    
    // Test Case 5: Empty array
    int arr5[] = {};
    int size5 = 0;
    printf("Test 5 - Empty array:\n");
    printf("Before: ");
    print_array(arr5, size5);
    bubble_sort(arr5, size5);
    printf("After:  ");
    print_array(arr5, size5);
    printf("\n");
    
    // Test Case 6: Duplicate elements
    int arr6[] = {3, 5, 1, 3, 2, 5, 1};
    int size6 = sizeof(arr6) / sizeof(arr6[0]);
    printf("Test 6 - Duplicate elements:\n");
    printf("Before: ");
    print_array(arr6, size6);
    bubble_sort(arr6, size6);
    printf("After:  ");
    print_array(arr6, size6);
    printf("\n");
    
    return 0;
}

