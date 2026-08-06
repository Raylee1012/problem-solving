# UVa 10055 - Hashmat the Brave Warrior

- **Problem Link:** [UVa 10055 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=996)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Calculate the absolute difference between two army soldier counts for each given test case.
- **64-bit Integer Handling:** Use 64-bit signed integers (`long long`) to prevent overflow, as input values can exceed the 32-bit integer limit ($2^{32}$).
- **Absolute Value Calculation:** Utilize `std::abs` from `<cmath>` to calculate the magnitude of difference between two numbers.

---

## Complexity

- **Time Complexity:** $O(N)$ — where $N$ is the number of input test cases.
- **Space Complexity:** $O(1)$ — constant space required to process input pairs.