#include <iostream>
using namespace std;

/*
Insertion Sort Function
Sorts the array in ascending order
*/
void insertionSort(int arr[], int n) {
    // Edge case: empty array or single element
    if (n <= 1) {
        return;
    }

   
    for (int i = 1; i < n; i++) {
        int key = arr[i];     
        int j = i - 1;

       
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert key at correct position
        arr[j + 1] = key;
    }
}

/*
Utility function to print array
*/
void printArray(int arr[], int n) {
    if (n == 0) {
        cout << "Array is empty" << endl;
        return;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*
Main function
Example usage and test cases
*/
int main() {
    // Normal case
    int arr[] = {8, 3, 5, 2, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    //Already sorted
    int brr[] = {2,4,6,8,9};
    int b = sizeof(brr) / sizeof(brr[0]);

    cout << "\nAlready Sorted array: ";
    printArray(brr, b);

    insertionSort(brr, b);

    cout << "Sorted array: ";
    printArray(brr, b);
    
    //Reverse Sorted
    int reverse[] = {8,6,5,3,1};
    int c = sizeof(reverse) / sizeof(reverse[0]);

    cout << "\nReverse array: ";
    printArray(reverse, c);

    insertionSort(reverse, c);

    cout << "Sorted array: ";
    printArray(reverse, c);


    // Single element case
    int single[] = {10};
    cout << "\nSingle element array: ";
    printArray(single, 1);
    insertionSort(single, 1);

    // Empty array case
    int empty[0];
    cout << "\nEmpty array: ";
    printArray(empty, 0);

    return 0;
}

/*
Time Complexity:
- Best Case:  O(n)   (already sorted)
- Average:    O(n^2)
- Worst Case: O(n^2)

Space Complexity:
- O(1) (in-place sorting)
*/
