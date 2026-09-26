# UVa 11461 - Square Numbers

- **Problem Link:** [UVa 11461 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2456)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Given two positive integers $a$ and $b$ ($0 < a \le b \le 100000$), determine the number of square numbers (perfect squares) in the closed interval $[a, b]$.
- **Square Root Boundary Calculation:**
  - Computes $\lfloor\sqrt{a}\rfloor$ and $\lfloor\sqrt{b}\rfloor$ using standard `std::sqrt`.
  - Calculates base count as `sqrt_b - sqrt_a`.
  - Checks whether the lower boundary $a$ itself is a perfect square (`sqrt_a * sqrt_a == a`); if true, increments the count by $1$ to include the lower bound in the closed interval.
- **Termination:**
  - Breaks the loop when both $a = 0$ and $b = 0$.

---

## Complexity

- **Time Complexity:** $O(1)$ — arithmetic computation and floating-point square root operations take constant time per testcase.
- **Space Complexity:** $O(1)$ — auxiliary storage requires only scalar integer variables.