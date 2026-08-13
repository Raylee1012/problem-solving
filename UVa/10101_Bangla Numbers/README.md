# UVa 10101 - Bangla Numbers

- **Problem Link:** [UVa 10101 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1042)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Convert large numbers into the Bangla numbering system using unit terms: `kuti` ($10^7$), `lakh` ($10^5$), `hajar` ($10^3$), and `shata` ($10^2$).
- **Hierarchical Splitting:**
  - Numbers exceeding $10^7$ are split into high-order `kuti` parts and low-order `rest` parts.
  - Recursively/hierarchically formats the `kuti` segment before parsing remaining quantities.
- **Formatting Constraints:**
  - Uses `std::setw(4)` to right-align the test case sequence numbers.
  - Uses a boolean flag `first` to control precise single-space separation between printed words.

---

## Complexity

- **Time Complexity:** $O(N)$ — where $N$ is the number of test cases. Processing each 64-bit integer takes constant $O(1)$ arithmetic operations.
- **Space Complexity:** $O(1)$ — constant space required for variables.