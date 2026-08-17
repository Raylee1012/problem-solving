# UVa 10170 - The Hotel with Infinite Rooms

- **Problem Link:** [UVa 10170 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1111)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Determine the group size occupying the hotel on target day $D$, given initial group size $S$.
- **Arithmetic Simulation:**
  - Starts with `people = S` and subtracts $S$ from target day $D$.
  - Continuously increments `people` and subtracts `people` from $D$ until $D \le 0$.
  - The final value of `people` represents the group size residing in the hotel on day $D$.
- **64-bit Integer Precision:** Uses 64-bit integers (`long long`) for variable $D$ to prevent overflow since target day values can reach $10^{15}$.

---

## Complexity

- **Time Complexity:** $O(\sqrt{N})$ — where $N$ represents the target day value $D$. The arithmetic sequence sum $\frac{(S + \text{people})((\text{people} - S + 1))}{2} \approx D$ requires at most $O(\sqrt{N})$ loop iterations per test case.
- **Space Complexity:** $O(1)$ — constant auxiliary memory space used.