# UVa 10190 - Divide, But Not Quite Conquer!

- **Problem Link:** [UVa 10190 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1131)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Determine whether $n$ can be continuously divided by $m$ until it reaches 1. If valid, print the sequence of divisions; otherwise, output `Boring!`.
- **Edge Case Guarding:**
  - If $n < m$, $n \le 1$, or $m \le 1$, the sequence is invalid (`Boring!`).
- **Iterative Division & Recording:**
  - Repeatedly verifies `cur % m == 0` and performs `cur /= m`, storing intermediate values into `std::vector<int>`.
  - If a non-zero remainder is encountered before reaching 1, the division sequence terminates as invalid.

---

## Complexity

- **Time Complexity:** $O(\log N)$ — where $N$ represents the initial value $n$. In each step, $n$ is divided by $m$ ($m \ge 2$), requiring at most $O(\log_m N)$ iterations per testcase.
- **Space Complexity:** $O(\log N)$ — space needed to store the division sequence in a vector.