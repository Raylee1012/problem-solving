# UVa 10812 - Beat the Spread!

- **Problem Link:** [UVa 10812 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1753)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Given the sum $s = a + b$ and the non-negative difference $d = |a - b|$ of two final scores, determine the two individual non-negative integer scores $(a, b)$ with $a \ge b$.
- **System of Linear Equations:**
  - Adding the two equations: $a + b = s$ and $a - b = d$ gives $2a = s + d \implies a = (s + d) / 2$.
  - Subtracting gives $2b = s - d \implies b = (s - d) / 2$.
- **Validity Conditions (Impossible cases):**
  - Scores must be non-negative integers: $s \ge d$ (otherwise $b < 0$).
  - The sum $s + d$ must be an even integer: $(s + d) \pmod 2 == 0$ (otherwise $a$ and $b$ are not integers).
  - If either condition is violated, output `impossible`.

---

## Complexity

- **Time Complexity:** $O(1)$ — constant-time arithmetic evaluation per test case.
- **Space Complexity:** $O(1)$ — constant auxiliary space required.