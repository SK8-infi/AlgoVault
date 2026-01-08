# C++ Algorithms

This directory contains algorithm implementations in **C++ (C++11 or later)**.

---

## 🛠️ How to Compile and Run

### Prerequisites
- G++ compiler (recommended) or any C++11-compatible compiler
- Basic command line knowledge

### Compilation

**Single file compilation:**
```bash
g++ -o program_name file_name.cpp
./program_name
```

**With C++11 and warnings enabled (recommended):**
```bash
g++ -Wall -Wextra -std=c++11 -o program_name file_name.cpp
./program_name
```

**For C++17 or later:**
```bash
g++ -Wall -Wextra -std=c++17 -o program_name file_name.cpp
./program_name
```

### Example
```bash
# Compile bubble sort
g++ -Wall -std=c++11 -o bubble_sort sorting/bubble_sort.cpp

# Run the program
./bubble_sort
```

---

## 📝 C++ Coding Guidelines

### File Structure
Every C++ algorithm file should include:

1. **Header comment** with:
   - Algorithm name and description
   - Time complexity
   - Space complexity

2. **Include statements** (use appropriate STL headers)

3. **Function implementation** with clear comments

4. **Main function** with example usage and test cases

### Example Template

```cpp
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

#include <iostream>
#include <vector>
using namespace std;

/**
 * Sorts a vector using bubble sort algorithm
 * 
 * @param arr Reference to the vector to be sorted
 */
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements using STL swap
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        
        // If no swaps occurred, array is sorted
        if (!swapped)
            break;
    }
}

/**
 * Utility function to print a vector
 */
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

/**
 * Main function with example usage
 */
int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    
    cout << "Original array: ";
    printArray(arr);
    
    bubbleSort(arr);
    
    cout << "Sorted array: ";
    printArray(arr);
    
    return 0;
}
```

---

## ✅ C++ Style Guidelines

### Naming Conventions
- **Functions**: `camelCase` or `snake_case` (be consistent within the file)
  - Example: `bubbleSort` or `bubble_sort`
- **Variables**: `camelCase` or `snake_case`
  - Example: `arraySize` or `array_size`
- **Classes**: `PascalCase` (e.g., `BinaryTree`, `LinkedList`)
- **Constants**: `UPPER_CASE` or `kPascalCase`
  - Example: `MAX_SIZE` or `kMaxSize`
- **Files**: `snake_case.cpp` (e.g., `bubble_sort.cpp`)

### Code Style
- Use **4 spaces** for indentation (no tabs)
- Add spaces around operators: `a + b` not `a+b`
- Use meaningful variable names
- Prefer STL containers and algorithms where appropriate
- Use `const` and `const&` for read-only parameters

### Modern C++ Features
- ✅ Use `vector` instead of raw arrays when possible
- ✅ Use `auto` for complex type declarations
- ✅ Use range-based for loops: `for (auto& item : container)`
- ✅ Use smart pointers (`unique_ptr`, `shared_ptr`) instead of raw pointers
- ✅ Use `nullptr` instead of `NULL`
- ✅ Use `std::swap` for swapping elements

### Best Practices
- ✅ Pass large objects by reference: `const vector<int>&`
- ✅ Handle edge cases (empty containers, single elements)
- ✅ Include error handling where appropriate
- ✅ Use STL algorithms when applicable (`std::sort`, `std::find`)
- ✅ Initialize variables when declared
- ❌ Don't use `using namespace std;` in header files
- ❌ Avoid C-style casts (use `static_cast`, `dynamic_cast`)
- ❌ Don't use magic numbers (use named constants)

---

## 📁 Directory Structure

```
cpp/
├── sorting/
│   ├── bubble_sort.cpp
│   ├── selection_sort.cpp
│   ├── insertion_sort.cpp
│   └── ...
│
├── searching/
│   ├── linear_search.cpp
│   ├── binary_search.cpp
│   └── ...
│
└── README.md (this file)
```

---

## 🤝 Contributing

Before contributing C++ algorithms:

1. Ensure your code compiles without warnings with `-Wall -Wextra`
2. Test with various input cases (empty, single element, sorted, reverse sorted)
3. Follow the naming conventions and style guide above
4. Use appropriate STL containers and features
5. Include complexity analysis in comments
6. Provide example usage in the main function

---

## 📚 Resources for Learning C++

- [C++ Reference](https://en.cppreference.com/)
- [Learn C++ - LearnCpp.com](https://www.learncpp.com/)
- [C++ Standard Library](https://www.cplusplus.com/reference/)
- [Modern C++ Features](https://github.com/AnthonyCalandra/modern-cpp-features)

---

**Happy Coding in C++! 🚀**

