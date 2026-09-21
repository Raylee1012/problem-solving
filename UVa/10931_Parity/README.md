# UVa 10931 - Parity

- **Problem Link:** [UVa 10931 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1872)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** For a given positive integer $I$, generate its binary representation and count its parity (the total number of set bits / `1`s).
- **Base-2 Conversion via Division & Modulo:**
  - Repeatedly extracts bits using `I % 2`: appends `'1'` and increments `parity` if odd, otherwise appends `'0'`.
  - Divides `I` by 2 until it reaches 0.
  - Reverses the string using `std::reverse` to restore correct big-endian binary order.
- **Output Formatting:**
  - Outputs in the exact format: `The parity of <Binary> is <parity> (mod 2).`
  - Terminates when input $I = 0$.

---

## Complexity

- **Time Complexity:** $O(\log N)$ — where $N$ represents the input number $I$. Repeated division by 2 requires $\lfloor \log_2 N \rfloor + 1$ operations per testcase.
- **Space Complexity:** $O(\log N)$ — auxiliary string space required to store the binary representation.