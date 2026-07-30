# UVa 948 - Fibonaccimal Base

- **Problem Link:** [UVa 948 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=889)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Convert a given decimal integer into its Fibonaccimal base representation using Zeckendorf's theorem.
- **Precomputed Fibonacci Sequence:** Precalculate Fibonacci numbers up to $10^8$ using dynamic programming in an array (`fib[2]` onwards).
- **Greedy Representation:** Iterate backwards from the largest precomputed Fibonacci number. Subtract `fib[i]` from `remaining` whenever `fib[i] <= remaining` and set `result[i] = 1`.
- **Leading Zero Suppression:** Use a boolean flag `start` to omit leading zeros during output printing until the first `1` is encountered.

---

## Complexity

- **Time Complexity:** $O(N)$ — where $N$ represents the number of input queries (the Fibonacci conversion loop runs in $O(1)$ constant steps per query).
- **Space Complexity:** $O(1)$ — constant space required to store precomputed Fibonacci numbers and the result array.