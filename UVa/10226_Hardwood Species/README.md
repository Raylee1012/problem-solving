# UVa 10226 - Hardwood Species

- **Problem Link:** [UVa 10226 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1167)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Read lists of tree species names for multiple test cases, calculate the population percentage for each species rounded to 4 decimal places, and output them sorted in alphabetical order.
- **Input Parsing & Blank Lines:**
  - Consumes trailing newline characters using two `cin.ignore()` calls after reading the test case count `T`.
  - Terminates per-case data collection upon encountering an empty string (`line.empty()`).
  - Separates outputs of consecutive test cases with a blank line using a `first` boolean flag.
- **Linear Insertion & Index Sorting:**
  - Maintains separate arrays for unique species names (`names`) and their frequencies (`cnt`).
  - Sorts an auxiliary index array `idx` using an alphabetical comparator (`names[a] < names[b]`) to avoid moving large string objects during sort.
  - Computes and prints the percentage using `std::fixed` and `std::setprecision(4)`.

---

## Complexity

- **Time Complexity:** $O(N^2)$ — where $N$ is the number of tree species records. Linearly searching through unique species for each tree input takes $O(N^2)$ worst-case time, while index sorting takes $O(U \log U)$ where $U \le N$ is the number of unique species.
- **Space Complexity:** $O(N)$ — auxiliary space required to store unique species names, counts, and indices.