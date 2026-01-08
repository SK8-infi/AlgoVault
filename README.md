# 🔐 AlgoVault

**A beginner-friendly open-source repository for learning and contributing basic algorithms in C, C++, and Python.**

---

## 📚 About AlgoVault

AlgoVault is a project under **ABV-IIITM IEEE Student Branch** designed to help students learn about Git, GitHub, and open-source contribution while mastering fundamental algorithms. This repository serves as a collection of clean, well-documented implementations of basic algorithms across three popular programming languages.

Whether you're new to programming or looking to strengthen your understanding of algorithms, AlgoVault provides a structured and welcoming environment to learn and contribute.

---

## 🎯 Project Goals

- Provide clear, beginner-friendly implementations of fundamental algorithms
- Teach students practical Git and GitHub workflows
- Foster open-source contribution skills
- Build a comprehensive algorithm library in C, C++, and Python
- Create a collaborative learning environment

---

## 📂 Repository Structure

```
AlgoVault/
│
├── c/                          # C implementations
│   ├── sorting/
│   ├── searching/
│   └── README.md
│
├── cpp/                        # C++ implementations
│   ├── sorting/
│   ├── searching/
│   └── README.md
│
├── python/                     # Python implementations
│   ├── sorting/
│   ├── searching/
│   └── README.md
│
├── .github/                    # GitHub templates and workflows
│   ├── ISSUE_TEMPLATE/
│   │   ├── bug_report.md
│   │   ├── algorithm_request.md
│   │   └── documentation.md
│   └── PULL_REQUEST_TEMPLATE.md
│
├── CONTRIBUTING.md             # Contribution guidelines
├── CODE_OF_CONDUCT.md          # Community standards
├── LICENSE                     # MIT License
└── README.md                   # This file
```

---

## 🚀 Supported Languages

| Language | Version | File Extension |
|----------|---------|----------------|
| C        | C99+    | `.c`          |
| C++      | C++11+  | `.cpp`        |
| Python   | 3.6+    | `.py`         |

---

## 🎓 Algorithm Categories

- **Sorting**: Bubble Sort, Selection Sort, Insertion Sort, Merge Sort, Quick Sort, etc.
- **Searching**: Linear Search, Binary Search, Jump Search, etc.
- **More categories coming soon!**

---

## 🤝 How to Contribute

We welcome contributions from developers of all skill levels! Here's how you can get started:

1. **Fork this repository** to your GitHub account
2. **Clone your fork** locally:
   ```bash
   git clone https://github.com/your-username/AlgoVault.git
   cd AlgoVault
   ```
3. **Create a new branch** for your contribution:
   ```bash
   git checkout -b add-algorithm-name
   ```
4. **Add your algorithm** following our guidelines (see below)
5. **Commit your changes** with a clear message:
   ```bash
   git commit -m "Add bubble sort in Python"
   ```
6. **Push to your fork**:
   ```bash
   git push origin add-algorithm-name
   ```
7. **Open a Pull Request** to the main repository

📖 For detailed contribution guidelines, please read [CONTRIBUTING.md](CONTRIBUTING.md)

---

## 📝 Contribution Rules

### File Naming
- Use **snake_case** for all file names
- Be descriptive and specific
- Examples: `bubble_sort.py`, `binary_search.cpp`, `quick_sort.c`

### Code Quality
- ✅ Include clear comments explaining the algorithm
- ✅ Add time and space complexity at the top of the file
- ✅ Keep code simple and readable (target beginners)
- ✅ Test your code before submitting
- ✅ Follow language-specific conventions (see language README files)
- ❌ No plagiarism - write original implementations
- ❌ No unnecessary dependencies

### Example File Structure

**Python Example** (`python/sorting/bubble_sort.py`):
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

def bubble_sort(arr):
    """
    Sorts an array using bubble sort algorithm
    
    Args:
        arr: List of comparable elements
    
    Returns:
        Sorted list
    """
    n = len(arr)
    
    for i in range(n):
        # Flag to optimize by stopping if no swaps occur
        swapped = False
        
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True
        
        if not swapped:
            break
    
    return arr

# Example usage
if __name__ == "__main__":
    sample_array = [64, 34, 25, 12, 22, 11, 90]
    print(f"Original array: {sample_array}")
    sorted_array = bubble_sort(sample_array.copy())
    print(f"Sorted array: {sorted_array}")
```

---

## 🏷️ Finding Issues to Work On

- Check the [Issues](https://github.com/ABV-IIITM/AlgoVault/issues) tab for open tasks
- Look for issues labeled `good first issue` or `help wanted`
- Comment on an issue to get assigned before starting work
- If you have a new algorithm idea, create an issue first!

---

## 🌟 Recognition

All contributors will be recognized! Your contributions help:
- Build your open-source portfolio
- Strengthen your GitHub profile
- Improve your algorithm knowledge
- Help fellow students learn

---

## 📜 License

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.

---

## 👥 Maintainers

**ABV-IIITM IEEE Student Branch**

For questions, suggestions, or support:
- Open an issue on GitHub
- Contact: abv.iiitm.ieee@example.com *(Update with actual contact)*

---

## 🙏 Acknowledgments

Thanks to all contributors who help make AlgoVault a valuable learning resource for students worldwide!

---

## ⭐ Show Your Support

If you find this project helpful, please give it a star! It helps others discover this resource.

---

**Happy Coding! 🚀**
