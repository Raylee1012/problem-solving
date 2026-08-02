# UVa 10035 - Primary Arithmetic

- **Problem Link:** [UVa 10035 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=976)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Count the total number of carry operations when adding two unsigned integers.
- **Digit-by-Digit Addition:** Process both numbers from right to left using modulo 10 (`% 10`) and division by 10 (`/ 10`).
- **Carry Propagation:** Maintain a `carry` flag (0 or 1) and increment `carryCount` whenever `digit1 + digit2 + carry >= 10`.
- **Grammar Formatting:** Carefully output `"No carry operation."`, `"1 carry operation."`, or `"<N> carry operations."` depending on `carryCount`.

---

## Complexity

- **Time Complexity:** $O(N)$ — where $N$ is the number of input test cases.
- **Space Complexity:** $O(1)$ — constant space required for digits, carry variables, and counters.