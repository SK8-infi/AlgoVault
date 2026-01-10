"""
Linear Search Algorithm

Description:
Linear search is the simplest searching algorithm that checks every element
in the list sequentially until the target element is found or the end is reached.

Time Complexity: O(n) - where n is the number of elements
Space Complexity: O(1) - no extra space required

Best Case: O(1) - element found at first position
Worst Case: O(n) - element at last position or not present
"""


def linear_search(arr, target):
    """
    Performs linear search on a list
    
    Args:
        arr: list to search in
        target: element to search for
    
    Returns:
        index of the element if found, -1 otherwise
    """
    # Edge case: empty list
    if not arr:
        return -1
    
    # Iterate through each element
    for i in range(len(arr)):
        if arr[i] == target:
            return i  # Element found, return index
    
    return -1  # Element not found


# Example usage and test cases
if __name__ == "__main__":
    print("=== Linear Search Examples ===\n")
    
    # Test Case 1: Normal case
    arr1 = [10, 23, 45, 70, 11, 15]
    target1 = 70
    result1 = linear_search(arr1, target1)
    print("Test 1 - Normal case:")
    print(f"Array: {arr1}")
    print(f"Target: {target1}")
    print(f"Result: {'Found' if result1 != -1 else 'Not Found'}", end="")
    if result1 != -1:
        print(f" at index {result1}")
    else:
        print()
    print()
    
    # Test Case 2: Element not present
    target2 = 100
    result2 = linear_search(arr1, target2)
    print("Test 2 - Element not present:")
    print(f"Array: {arr1}")
    print(f"Target: {target2}")
    print(f"Result: {'Found' if result2 != -1 else 'Not Found'}")
    print()
    
    # Test Case 3: Single element (found)
    arr3 = [42]
    target3 = 42
    result3 = linear_search(arr3, target3)
    print("Test 3 - Single element (found):")
    print(f"Array: {arr3}")
    print(f"Target: {target3}")
    print(f"Result: {'Found' if result3 != -1 else 'Not Found'}", end="")
    if result3 != -1:
        print(f" at index {result3}")
    else:
        print()
    print()
    
    # Test Case 4: Single element (not found)
    target4 = 10
    result4 = linear_search(arr3, target4)
    print("Test 4 - Single element (not found):")
    print(f"Array: {arr3}")
    print(f"Target: {target4}")
    print(f"Result: {'Found' if result4 != -1 else 'Not Found'}")
    print()
    
    # Test Case 5: Empty list
    arr5 = []
    target5 = 10
    result5 = linear_search(arr5, target5)
    print("Test 5 - Empty list:")
    print(f"Array: {arr5}")
    print(f"Target: {target5}")
    print(f"Result: {'Found' if result5 != -1 else 'Not Found'}")
    print()
    
    # Test Case 6: First element
    target6 = 10
    result6 = linear_search(arr1, target6)
    print("Test 6 - First element:")
    print(f"Array: {arr1}")
    print(f"Target: {target6}")
    print(f"Result: {'Found' if result6 != -1 else 'Not Found'}", end="")
    if result6 != -1:
        print(f" at index {result6}")
    else:
        print()
    print()

