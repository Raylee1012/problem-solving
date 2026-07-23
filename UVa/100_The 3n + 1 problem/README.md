# UVa 100 - The 3n + 1 problem

- **Problem Link:** [UVa 100 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=36)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Find the maximum cycle length among all integers between $i$ and $j$ (inclusive).
- **Range Normalization:** Inputs are not guaranteed to be ordered ($i \le j$). Use `std::min` and `std::max` to normalize loop bounds while preserving original `(i, j)` for output.
- **Function Pass-by-Reference:** Use `getCycleLength()` with reference parameter `int &cycle_length` to update steps directly, keeping the main loop clean.

---

## Complexity

- **Time Complexity:** $O(N)$ — where $N$ is the number of integers in the range $[i, j]$.
- **Space Complexity:** $O(1)$ — constant space requirement.