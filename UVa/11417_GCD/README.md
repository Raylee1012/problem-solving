# UVa 11417 - GCD

- **Problem Link:** [UVa 11417 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2412)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** For a given integer $N$ ($1 < N < 501$), calculate the cumulative sum of greatest common divisors $G = \sum_{i=1}^{N-1} \sum_{j=i+1}^{N} \gcd(i, j)$.
- **Euclidean Algorithm:**
  - Implements the standard iterative Euclidean algorithm `GCD(x, y)` to compute the greatest common divisor using modulo operations in logarithmic steps.
- **Nested Pair Enumeration:**
  - Loops over all unique index pairs $(i, j)$ with $1 \le i < j \le N$.
  - Accumulates each $\gcd(i, j)$ into `G` and resets `G = 0` for each test case.
- **Termination:**
  - The program terminates when $N = 0$.

---

## Complexity

- **Time Complexity:** $O(N^2 \log N)$ — where $N$ represents the input upper bound. There are $\frac{N(N - 1)}{2} = O(N^2)$ pairs evaluated per testcase, and each $\gcd(i, j)$ computation takes $O(\log N)$ steps via the Euclidean algorithm.
- **Space Complexity:** $O(1)$ — requires only scalar integer variables without dynamically allocated arrays.