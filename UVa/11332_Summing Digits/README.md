# UVa 11332 - Summing Digits

- **Problem Link:** [UVa 11332 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2307)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** For a given positive integer $N \le 2 \times 10^9$, compute its digital root by repeatedly summing all digits until a single-digit number remains.
- **Recursive Digit Summing via Strings:**
  - Reads the input as a string `n` to easily access individual digits.
  - While `n.length() != 1`, iterates through all characters in the string, sums their numeric values (`n[i] - '0'`), and updates `n` via `std::to_string(ans)`.
- **Termination:**
  - The process stops and outputs `n` once it is reduced to a single digit.
  - The program terminates when the input string is `"0"`.

---

## Complexity

- **Time Complexity:** $O(\log N)$ — where $N$ is the numerical value of the input integer ($N \le 2 \times 10^9$). The number of digits in base 10 is $\lfloor \log_{10} N \rfloor + 1$. The first reduction processes $O(\log N)$ digits to produce a sum of at most $9 \times 10 = 90$, after which subsequent iterations complete in $O(1)$ constant steps.
- **Space Complexity:** $O(\log N)$ — auxiliary space required to store the string representation of $N$, which scales with the number of digits $\lfloor \log_{10} N \rfloor + 1$.