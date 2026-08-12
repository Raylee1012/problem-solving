# UVa 10093 - An Easy Problem!

- **Problem Link:** [UVa 10093 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1034)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Find the smallest base $N$ ($2 \le N \le 62$) in which the given number string is divisible by $N - 1$.
- **Divisibility Rule:** A number represented in base $N$ is divisible by $N - 1$ if and only if the sum of its digits is divisible by $N - 1$ (generalization of the base-10 divisibility rule by 9).
- **Digit Value Mapping:**
  - `'0' - '9'` $\rightarrow 0 - 9$
  - `'A' - 'Z'` $\rightarrow 10 - 35$
  - `'a' - 'z'` $\rightarrow 36 - 61$
- **Base Constraints:**
  - The minimum base $N$ must be at least $\max(\text{maxDigit} + 1, 2)$ to validly represent all characters in the input string.
  - Skips leading sign symbols (`+` or `-`).

---

## Complexity

- **Time Complexity:** $O(N)$ — where $N$ is the length of the string per line. Computing the digit sum takes $O(N)$, and testing base $N$ from $\text{minN}$ up to $62$ takes $O(1)$ constant time.
- **Space Complexity:** $O(1)$ — constant auxiliary space required.