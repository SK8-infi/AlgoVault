# Contributing to AlgoVault

First off, thank you for considering contributing to AlgoVault! 🎉

This document provides guidelines for contributing to this project. Following these guidelines helps maintain code quality and makes the review process smoother for everyone.

---

## 📋 Table of Contents

- [Code of Conduct](#code-of-conduct)
- [Getting Started](#getting-started)
- [How to Contribute](#how-to-contribute)
- [Contribution Workflow](#contribution-workflow)
- [Code Quality Standards](#code-quality-standards)
- [Commit Message Guidelines](#commit-message-guidelines)
- [Pull Request Process](#pull-request-process)
- [Getting Help](#getting-help)

---

## 📜 Code of Conduct

This project adheres to a [Code of Conduct](CODE_OF_CONDUCT.md). By participating, you are expected to uphold this code. Please report unacceptable behavior to the project maintainers.

---

## 🚀 Getting Started

### Prerequisites

Before you begin, ensure you have:
- Git installed on your system
- Appropriate compiler/interpreter for your language:
  - **C**: GCC or any C99+ compiler
  - **C++**: G++ or any C++11+ compiler
  - **Python**: Python 3.6 or later
- A GitHub account
- Basic knowledge of Git and GitHub workflows

### Finding Issues to Work On

1. Browse the [Issues](https://github.com/ABV-IIITM/AlgoVault/issues) page
2. Look for issues labeled:
   - `good first issue` - Perfect for newcomers
   - `help wanted` - We need community help
   - `beginner-friendly` - Easy to tackle
3. Read the issue description carefully
4. Comment on the issue expressing your interest
5. Wait for assignment before starting work

**Note**: Please don't start working on an issue without being assigned to avoid duplicate efforts.

---

## 🤝 How to Contribute

### Types of Contributions

- **Add New Algorithms**: Implement algorithms not yet in the repository
- **Improve Existing Code**: Enhance readability, efficiency, or documentation
- **Fix Bugs**: Correct errors in existing implementations
- **Improve Documentation**: Fix typos, clarify instructions, add examples
- **Suggest Enhancements**: Propose new features or improvements

---

## 🔄 Contribution Workflow

### 1. Fork the Repository

Click the "Fork" button at the top right of the repository page to create your own copy.

### 2. Clone Your Fork

```bash
git clone https://github.com/your-username/AlgoVault.git
cd AlgoVault
```

### 3. Set Up Upstream Remote

```bash
git remote add upstream https://github.com/ABV-IIITM/AlgoVault.git
```

### 4. Create a New Branch

Always create a new branch for your work. Use a descriptive name:

```bash
git checkout -b add-bubble-sort-python
```

**Branch naming conventions:**
- `add-algorithm-name-language` (e.g., `add-merge-sort-cpp`)
- `fix-algorithm-name-language` (e.g., `fix-binary-search-c`)
- `docs-description` (e.g., `docs-improve-readme`)
- `bugfix-description` (e.g., `bugfix-sorting-edge-case`)

### 5. Make Your Changes

#### Adding a New Algorithm

1. Navigate to the appropriate directory:
   - `c/sorting/` or `c/searching/`
   - `cpp/sorting/` or `cpp/searching/`
   - `python/sorting/` or `python/searching/`

2. Create a new file with a descriptive name in `snake_case`:
   - Good: `bubble_sort.py`, `binary_search.cpp`, `quick_sort.c`
   - Bad: `BubbleSort.py`, `binarySearch.cpp`, `quicksort.c`

3. Follow the language-specific template and guidelines:
   - [C Guidelines](c/README.md)
   - [C++ Guidelines](cpp/README.md)
   - [Python Guidelines](python/README.md)

4. Ensure your implementation includes:
   - Clear comments explaining the algorithm
   - Time and space complexity analysis
   - Example usage with test cases
   - Edge case handling

### 6. Test Your Code

Before committing, thoroughly test your implementation:

**For C:**
```bash
gcc -Wall -Wextra -std=c99 -o test your_file.c
./test
```

**For C++:**
```bash
g++ -Wall -Wextra -std=c++11 -o test your_file.cpp
./test
```

**For Python:**
```bash
python3 your_file.py
```

**Test cases to verify:**
- ✅ Empty input
- ✅ Single element
- ✅ Already sorted input
- ✅ Reverse sorted input
- ✅ Duplicate elements
- ✅ Large datasets (if applicable)

### 7. Commit Your Changes

Stage your changes:
```bash
git add .
```

Commit with a clear, descriptive message:
```bash
git commit -m "Add bubble sort implementation in Python"
```

See [Commit Message Guidelines](#commit-message-guidelines) for more details.

### 8. Keep Your Fork Updated

Before pushing, sync with the upstream repository:

```bash
git fetch upstream
git rebase upstream/main
```

If there are conflicts, resolve them and continue:
```bash
git add .
git rebase --continue
```

### 9. Push to Your Fork

```bash
git push origin your-branch-name
```

If you rebased, you might need to force push:
```bash
git push --force origin your-branch-name
```

### 10. Open a Pull Request

1. Go to your fork on GitHub
2. Click "Compare & pull request"
3. Fill out the PR template completely
4. Link any related issues (e.g., "Closes #123")
5. Click "Create pull request"

---

## ✅ Code Quality Standards

### General Requirements

- ✅ Code must be original (no plagiarism)
- ✅ Code must compile/run without errors
- ✅ Follow language-specific style guidelines
- ✅ Include clear, helpful comments
- ✅ Add time and space complexity analysis
- ✅ Provide example usage
- ✅ Handle edge cases appropriately
- ✅ Use meaningful variable names
- ❌ No unnecessary dependencies
- ❌ No generated or obfuscated code
- ❌ No compiled binaries

### File Naming

- Use `snake_case` for all files
- Be descriptive and specific
- Match the algorithm name

**Examples:**
- ✅ `bubble_sort.py`
- ✅ `binary_search.cpp`
- ✅ `merge_sort.c`
- ❌ `sort.py`
- ❌ `search1.cpp`
- ❌ `algorithm.c`

### Code Comments

- Explain **what** the code does and **why**
- Add complexity analysis at the file header
- Comment non-obvious logic
- Avoid redundant comments

**Good:**
```python
# Binary search requires sorted array - O(log n) time
```

**Bad:**
```python
# This is a loop
for i in range(n):
```

---

## 📝 Commit Message Guidelines

### Format

```
<type>: <subject>

<body (optional)>
```

### Types

- `add`: New algorithm or feature
- `fix`: Bug fix
- `docs`: Documentation changes
- `style`: Code formatting (no logic change)
- `refactor`: Code refactoring
- `test`: Adding or updating tests
- `chore`: Maintenance tasks

### Examples

**Good commit messages:**
```
add: Implement bubble sort in Python

fix: Correct edge case in binary search C++ implementation

docs: Update contribution guidelines with commit format

refactor: Improve readability of merge sort algorithm
```

**Bad commit messages:**
```
Update file
Fixed bug
Changes
asdfasdf
```

### Best Practices

- Use present tense ("add" not "added")
- Keep subject line under 50 characters
- Capitalize subject line
- Don't end subject with a period
- Use body to explain **what** and **why**, not **how**

---

## 🔍 Pull Request Process

### Before Submitting

- [ ] Code compiles/runs successfully
- [ ] Follows naming conventions
- [ ] Includes clear comments and documentation
- [ ] Includes time and space complexity
- [ ] Tested with multiple test cases
- [ ] No duplicate algorithm exists
- [ ] Synced with latest upstream changes

### PR Title Format

Use the same format as commit messages:

```
add: Bubble sort in Python
fix: Binary search edge case in C++
docs: Improve Python README examples
```

### PR Description

Fill out the pull request template completely:

- Describe what you've changed
- Mention the algorithm category (sorting/searching/etc.)
- Specify the language used
- Complete the checklist
- Link related issues (e.g., "Closes #42")

### Review Process

1. A maintainer will review your PR within 3-5 days
2. They may request changes or ask questions
3. Address feedback by pushing new commits to your branch
4. Once approved, a maintainer will merge your PR
5. Your contribution will be visible to everyone! 🎉

### After Your PR is Merged

1. Delete your feature branch:
   ```bash
   git branch -d your-branch-name
   git push origin --delete your-branch-name
   ```

2. Update your main branch:
   ```bash
   git checkout main
   git pull upstream main
   ```

3. Celebrate! You've contributed to open source! 🎊

---

## 🆘 Getting Help

### Where to Ask Questions

- **GitHub Issues**: For bugs, features, or algorithm requests
- **PR Comments**: For questions about your specific pull request
- **Discussions**: For general questions (if enabled)

### Common Issues

**Q: My PR has merge conflicts. What do I do?**

A: Sync your branch with upstream:
```bash
git fetch upstream
git rebase upstream/main
# Resolve conflicts in your editor
git add .
git rebase --continue
git push --force origin your-branch-name
```

**Q: I made a mistake in my last commit. How do I fix it?**

A: Amend your commit:
```bash
# Make your fixes
git add .
git commit --amend --no-edit
git push --force origin your-branch-name
```

**Q: Can I work on multiple issues simultaneously?**

A: Yes, but create separate branches for each:
```bash
git checkout main
git checkout -b new-feature-branch
```

**Q: My PR was rejected. What should I do?**

A: Don't worry! Read the feedback, make improvements, and try again. Every rejection is a learning opportunity.

---

## 🌟 Recognition

All contributors will be recognized in our project! Your GitHub profile will show your contributions, which helps build your portfolio.

**Thank you for contributing to AlgoVault and helping students learn! 🚀**

---

## 📞 Contact

For questions or concerns, reach out to:
- **Email**: abv.iiitm.ieee@example.com *(Update with actual contact)*
- **GitHub Issues**: [Create an issue](https://github.com/ABV-IIITM/AlgoVault/issues/new)

---

**Happy Contributing! 🎉**

