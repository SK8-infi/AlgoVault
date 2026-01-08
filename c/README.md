# C Algorithms

This directory contains algorithm implementations in **C (C99 or later)**.

---

## 🛠️ How to Compile and Run

### Prerequisites
- GCC compiler (recommended) or any C99-compatible compiler
- Basic command line knowledge

### Compilation

**Single file compilation:**
```bash
gcc -o program_name file_name.c
./program_name
```

**With warnings enabled (recommended):**
```bash
gcc -Wall -Wextra -std=c99 -o program_name file_name.c
./program_name
```

### Example
```bash
# Compile bubble sort
gcc -Wall -std=c99 -o bubble_sort sorting/bubble_sort.c

# Run the program
./bubble_sort
```

---

## 📝 C Coding Guidelines

### File Structure
Every C algorithm file should include:

1. **Header comment** with:
   - Algorithm name and description
   - Time complexity
   - Space complexity

2. **Include statements** (only necessary ones)

3. **Function implementation** with clear comments

4. **Main function** with example usage and test cases

### Example Template

```c
/*
 * Algorithm: Bubble Sort
 * 
 * Time Complexity: O(n²) worst/average case, O(n) best case
 * Space Complexity: O(1)
 * 
 * Description:
 * Bubble sort repeatedly steps through the list, compares adjacent
 * elements and swaps them if they are in the wrong order.
 */

#include <stdio.h>
#include <stdbool.h>

/**
 * Sorts an array using bubble sort algorithm
 * 
 * @param arr The array to be sorted
 * @param n The size of the array
 */
void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        
        // If no swaps occurred, array is sorted
        if (!swapped)
            break;
    }
}

/**
 * Utility function to print an array
 */
void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/**
 * Main function with example usage
 */
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    print_array(arr, n);
    
    bubble_sort(arr, n);
    
    printf("Sorted array: ");
    print_array(arr, n);
    
    return 0;
}
```

---

## ✅ C Style Guidelines

### Naming Conventions
- **Functions**: `snake_case` (e.g., `bubble_sort`, `binary_search`)
- **Variables**: `snake_case` (e.g., `array_size`, `target_value`)
- **Constants**: `UPPER_CASE` (e.g., `MAX_SIZE`, `PI`)
- **Files**: `snake_case.c` (e.g., `bubble_sort.c`)

### Code Style
- Use **4 spaces** for indentation (no tabs)
- Add spaces around operators: `a + b` not `a+b`
- Use meaningful variable names
- Keep functions focused on a single task
- Add comments for complex logic

### Memory Management
- Always free dynamically allocated memory
- Avoid memory leaks
- Check for NULL pointers when using malloc/calloc

### Best Practices
- ✅ Check array bounds
- ✅ Handle edge cases (empty arrays, single elements)
- ✅ Use `const` for parameters that shouldn't be modified
- ✅ Initialize variables before use
- ✅ Include error handling where appropriate
- ❌ Don't use global variables unless absolutely necessary
- ❌ Don't use magic numbers (use named constants)

---

## 📁 Directory Structure

```
c/
├── sorting/
│   ├── bubble_sort.c
│   ├── selection_sort.c
│   ├── insertion_sort.c
│   └── ...
│
├── searching/
│   ├── linear_search.c
│   ├── binary_search.c
│   └── ...
│
└── README.md (this file)
```

---

## 🤝 Contributing

Before contributing C algorithms:

1. Ensure your code compiles without warnings with `-Wall -Wextra`
2. Test with various input cases (empty, single element, sorted, reverse sorted)
3. Follow the naming conventions and style guide above
4. Include complexity analysis in comments
5. Provide example usage in the main function

---

## 📚 Resources for Learning C

- [C Programming Documentation](https://en.cppreference.com/w/c)
- [Learn C - Tutorials Point](https://www.tutorialspoint.com/cprogramming/)
- [The C Programming Language](https://www.amazon.com/Programming-Language-2nd-Brian-Kernighan/dp/0131103628) by K&R

---

**Happy Coding in C! 🚀**

