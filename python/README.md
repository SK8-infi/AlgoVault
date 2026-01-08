# Python Algorithms

This directory contains algorithm implementations in **Python (3.6 or later)**.

---

## 🛠️ How to Run

### Prerequisites
- Python 3.6 or later installed
- Basic command line knowledge

### Running Python Files

**Direct execution:**
```bash
python file_name.py
```

**Or using python3:**
```bash
python3 file_name.py
```

### Example
```bash
# Run bubble sort
python sorting/bubble_sort.py

# Or
python3 sorting/bubble_sort.py
```

---

## 📝 Python Coding Guidelines

### File Structure
Every Python algorithm file should include:

1. **Module docstring** with:
   - Algorithm name and description
   - Time complexity
   - Space complexity

2. **Import statements** (if needed)

3. **Function implementation** with docstrings and type hints

4. **Example usage** in `if __name__ == "__main__":` block

### Example Template

```python
"""
Bubble Sort Algorithm

Time Complexity: O(n²) in worst and average case, O(n) in best case
Space Complexity: O(1)

Description:
Bubble sort repeatedly steps through the list, compares adjacent elements
and swaps them if they're in the wrong order. The process repeats until
the list is sorted.
"""

from typing import List


def bubble_sort(arr: List[int]) -> List[int]:
    """
    Sorts a list using bubble sort algorithm.
    
    Args:
        arr: List of integers to be sorted
    
    Returns:
        The sorted list (modifies in place and returns)
    
    Examples:
        >>> bubble_sort([64, 34, 25, 12, 22, 11, 90])
        [11, 12, 22, 25, 34, 64, 90]
        
        >>> bubble_sort([5, 1, 4, 2, 8])
        [1, 2, 4, 5, 8]
    """
    n = len(arr)
    
    # Traverse through all array elements
    for i in range(n):
        swapped = False
        
        # Last i elements are already in place
        for j in range(0, n - i - 1):
            # Swap if the element found is greater than the next element
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True
        
        # If no swaps occurred, array is sorted
        if not swapped:
            break
    
    return arr


def print_array(arr: List[int]) -> None:
    """Helper function to print an array."""
    print(" ".join(map(str, arr)))


# Example usage and testing
if __name__ == "__main__":
    # Test case 1
    sample_array = [64, 34, 25, 12, 22, 11, 90]
    print("Original array:", end=" ")
    print_array(sample_array)
    
    bubble_sort(sample_array)
    
    print("Sorted array:", end=" ")
    print_array(sample_array)
    
    # Test case 2: Already sorted
    sorted_arr = [1, 2, 3, 4, 5]
    print("\nAlready sorted array:", end=" ")
    print_array(sorted_arr)
    bubble_sort(sorted_arr)
    print("After sorting:", end=" ")
    print_array(sorted_arr)
    
    # Test case 3: Reverse sorted
    reverse_arr = [5, 4, 3, 2, 1]
    print("\nReverse sorted array:", end=" ")
    print_array(reverse_arr)
    bubble_sort(reverse_arr)
    print("After sorting:", end=" ")
    print_array(reverse_arr)
```

---

## ✅ Python Style Guidelines

### Naming Conventions (PEP 8)
- **Functions**: `snake_case` (e.g., `bubble_sort`, `binary_search`)
- **Variables**: `snake_case` (e.g., `array_size`, `target_value`)
- **Constants**: `UPPER_CASE` (e.g., `MAX_SIZE`, `PI`)
- **Classes**: `PascalCase` (e.g., `BinaryTree`, `LinkedList`)
- **Files**: `snake_case.py` (e.g., `bubble_sort.py`)

### Code Style (PEP 8)
- Use **4 spaces** for indentation (never tabs)
- Maximum line length: 79 characters (be reasonable)
- Add spaces around operators: `a + b` not `a+b`
- Use meaningful variable names
- Add blank lines to separate logical sections

### Documentation
- ✅ Include module docstrings at the top of each file
- ✅ Add docstrings to all functions explaining parameters and return values
- ✅ Use type hints for function parameters and return types
- ✅ Include example usage in docstrings when helpful
- ✅ Add comments for complex logic

### Python Best Practices
- ✅ Use list comprehensions when appropriate (but keep them readable)
- ✅ Use built-in functions (`len()`, `sum()`, `max()`, `min()`)
- ✅ Use `enumerate()` when you need both index and value
- ✅ Use `zip()` to iterate over multiple lists
- ✅ Use `if __name__ == "__main__":` for example code
- ✅ Handle edge cases (empty lists, single elements)
- ❌ Don't use mutable default arguments (like `def func(arr=[]):`)
- ❌ Don't use `from module import *`
- ❌ Don't use single letter variable names (except for loop counters)

### Type Hints
```python
from typing import List, Optional, Tuple, Dict

def example_function(arr: List[int], target: int) -> Optional[int]:
    """Function with type hints."""
    pass
```

---

## 📁 Directory Structure

```
python/
├── sorting/
│   ├── bubble_sort.py
│   ├── selection_sort.py
│   ├── insertion_sort.py
│   └── ...
│
├── searching/
│   ├── linear_search.py
│   ├── binary_search.py
│   └── ...
│
└── README.md (this file)
```

---

## 🤝 Contributing

Before contributing Python algorithms:

1. Ensure your code runs without errors in Python 3.6+
2. Follow PEP 8 style guidelines (you can use `pylint` or `flake8`)
3. Test with various input cases (empty lists, single element, sorted, reverse sorted)
4. Include type hints for function parameters
5. Add comprehensive docstrings
6. Include complexity analysis in module docstring
7. Provide example usage in `if __name__ == "__main__":` block

### Checking Code Quality
```bash
# Install pylint (optional but recommended)
pip install pylint

# Check your code
pylint your_file.py
```

---

## 📚 Resources for Learning Python

- [Official Python Documentation](https://docs.python.org/3/)
- [Python Style Guide (PEP 8)](https://www.python.org/dev/peps/pep-0008/)
- [Real Python Tutorials](https://realpython.com/)
- [Python Type Hints](https://docs.python.org/3/library/typing.html)

---

**Happy Coding in Python! 🐍🚀**

