# UVa 10783 - Odd Sum

- **Problem Link:** [UVa 10783 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1724)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Given a range $[n_1, n_2]$, compute the sum of all odd integers within the inclusive interval.
- **Interval Traversal:**
  - Iterates through all integers from $n_1$ to $n_2$.
  - Uses the modulo operator `s % 2 == 1` to identify odd numbers and accumulates them into `sum`.
- **Formatting:**
  - Formats output for each test case as `Case X: sum`.

---

## Complexity

- **Time Complexity:** $O(N)$ — where $N$ is the range length ($n_2 - n_1 + 1$) per testcase. Traversing from $n_1$ to $n_2$ takes linear time with respect to the interval span.
- **Space Complexity:** $O(1)$ — requires only scalar variables for bounds and sum accumulation.