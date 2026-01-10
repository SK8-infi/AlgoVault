# Contributing to AlgoVault

Thank you for your interest in contributing to **AlgoVault** 🎉
This guide will help you make your **first open-source contribution smoothly**.

---

## 🚀 Getting Started

### Prerequisites

Make sure you have:

* Git installed
* A GitHub account
* One of the following (depending on what you code in):

  * **C**: GCC (C99+)
  * **C++**: G++ (C++11+)
  * **Python**: Python 3.6+

Basic Git knowledge is enough.

---

## 🧭 Find an Issue

1. Go to the **Issues** tab
   👉 https://github.com/ABV-IIITM/AlgoVault/issues
2. Look for:

   * `issue`
3. Comment on the issue you want to work on
4. **Wait for assignment** before starting

> ⚠️ Please don’t work on an issue unless it’s assigned to you.

---

## 🔄 Contribution Steps

### 1. Fork the Repository

Click **Fork** on the top-right of the repo.

### 2. Clone Your Fork

```bash
git clone https://github.com/your-username/AlgoVault.git
cd AlgoVault
```

### 3. Create a New Branch

```bash
git checkout -b add-bubble-sort-python
```

**Branch naming examples:**

* `add-bubble-sort-python`
* `fix-binary-search-cpp`
* `docs-readme-update`

---

## ✍️ Making Changes

### Adding an Algorithm

1. Go to the correct folder:

   * `c/`, `cpp/`, or `python/`
2. Use **snake_case** filenames:

   * `bubble_sort.py`
   * `binary_search.cpp`
3. Your code must include:

   * Clear comments
   * Time & space complexity
   * Example usage
   * Edge case handling

---

## 🧪 Test Your Code

Before committing, run your file:

**C**

```bash
gcc your_file.c -o test
./test
```

**C++**

```bash
g++ your_file.cpp -o test
./test
```

**Python**

```bash
python3 your_file.py
```

Test at least:

* Empty input
* Single element
* Normal case

---

## 💾 Commit Your Changes

```bash
git add .
git commit -m "add: bubble sort in Python"
```

**Good commit messages:**

* `add: merge sort in C++`
* `fix: binary search edge case`
* `docs: update README`

---

## ⬆️ Push & Create PR

```bash
git push origin your-branch-name
```

Then:

1. Go to your fork on GitHub
2. Click **Compare & Pull Request**
3. Fill the PR template
4. Link the issue (e.g., `Closes #12`)
5. Submit 🎉

---

## ✅ Basic Rules

* Code must run without errors
* No plagiarism
* Follow folder & naming rules
* One algorithm per PR
* Be respectful and open to feedback

---

## 🆘 Need Help?

* Ask in the **issue comments**
* Ask questions in your **PR**
* Maintainers are happy to help 🙂

---

## 🎉 That’s It!

Once your PR is merged, you’ve officially made your **first open-source contribution** 🚀
Welcome to AlgoVault!

**Happy Coding! 💙**
