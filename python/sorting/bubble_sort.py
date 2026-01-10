"""
Bubble Sort Algorithm

Description:
Bubble sort is a simple sorting algorithm that repeatedly steps through the list,
compares adjacent elements and swaps them if they are in the wrong order.
The pass through the list is repeated until the list is sorted.

Time Complexity: O(n^2) - where n is the number of elements
Space Complexity: O(1) - sorts in place

Best Case: O(n) - when list is already sorted (with optimization)
Worst Case: O(n^2) - when list is reverse sorted
"""


def bubble_sort(arr):
    """
    Sorts a list using bubble sort algorithm
    
    Args:
        arr: list to be sorted (modified in place)
    
    Returns:
        None (sorts the list in place)
    """
    n = len(arr)
    
    # Edge case: empty or single element list
    if n <= 1:
        return
    
    # Outer loop for each pass
    for i in range(n - 1):
        swapped = False
        
        # Inner loop for comparing adjacent elements
        for j in range(n - i - 1):
            # Swap if current element is greater than next
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True
        
        # If no swaps occurred, list is sorted
        if not swapped:
            break


# Example usage and test cases
if __name__ == "__main__":
    print("=== Bubble Sort Examples ===\n")
    
    # Test Case 1: Normal case
    arr1 = [64, 34, 25, 12, 22, 11, 90]
    print("Test 1 - Normal case:")
    print(f"Before: {arr1}")
    bubble_sort(arr1)
    print(f"After:  {arr1}")
    print()
    
    # Test Case 2: Already sorted
    arr2 = [1, 2, 3, 4, 5]
    print("Test 2 - Already sorted:")
    print(f"Before: {arr2}")
    bubble_sort(arr2)
    print(f"After:  {arr2}")
    print()
    
    # Test Case 3: Reverse sorted
    arr3 = [5, 4, 3, 2, 1]
    print("Test 3 - Reverse sorted:")
    print(f"Before: {arr3}")
    bubble_sort(arr3)
    print(f"After:  {arr3}")
    print()
    
    # Test Case 4: Single element
    arr4 = [42]
    print("Test 4 - Single element:")
    print(f"Before: {arr4}")
    bubble_sort(arr4)
    print(f"After:  {arr4}")
    print()
    
    # Test Case 5: Empty list
    arr5 = []
    print("Test 5 - Empty list:")
    print(f"Before: {arr5}")
    bubble_sort(arr5)
    print(f"After:  {arr5}")
    print()
    
    # Test Case 6: Duplicate elements
    arr6 = [3, 5, 1, 3, 2, 5, 1]
    print("Test 6 - Duplicate elements:")
    print(f"Before: {arr6}")
    bubble_sort(arr6)
    print(f"After:  {arr6}")
    print()

