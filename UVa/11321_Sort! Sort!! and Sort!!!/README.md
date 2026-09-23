# UVa 11321 - Sort! Sort!! and Sort!!!

- **Problem Link:** [UVa 11321 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2296)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Sort a sequence of $N$ integers based on their modulo $M$ values, resolving ties using specific parity and magnitude rules.
- **Custom Comparator Tie-Breaking Logic:**
  1. **Modulo Value:** Numbers with smaller $x \pmod M$ precede those with larger remainder values.
  2. **Ties (Same Modulo):**
     - **Both Even:** The smaller numerical value precedes the larger numerical value (`x < y`, ascending).
     - **Both Odd:** The larger numerical value precedes the smaller numerical value (`x > y`, descending).
     - **One Odd & One Even:** The odd number precedes the even number (`abs(x % 2) == 1`).
- **Negative Integer Modulo Handling:**
  - In C++, the `%` operator on negative numbers preserves the negative sign. Using `abs(x % 2) == 1` correctly identifies negative odd integers without unexpected sign bugs.
- **Termination:**
  - The dataset terminates when both $N = 0$ and $M = 0$, echoing `0 0` as required.

---

## Complexity

- **Time Complexity:** $O(N \log N)$ — where $N$ is the number of integers to sort. Sorting dominates the execution time with $O(N \log N)$ comparisons, each evaluated in $O(1)$.
- **Space Complexity:** $O(N)$ — auxiliary space required to store the array of $N$ integers.