# UVa 10193 - All You Need Is Love

- **Problem Link:** [UVa 10193 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1134)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Determine whether two binary string inputs share a common divisor string $L$ of length $> 1$ (which corresponds to whether their numerical decimal representations share a greatest common divisor $> 1$).
- **Base Conversion (`binTOdec`):**
  - Parses each binary string left-to-right using Horner's Method: `result = result * 2 + (c[i] - '0')`.
- **Greatest Common Divisor (GCD):**
  - Uses `std::__gcd` (Euclidean Algorithm) to compute $\gcd(n_1, n_2)$ in logarithmic time.
  - If $\gcd > 1$, outputs `All you need is love!`; otherwise outputs `Love is not all you need!`.

---

## Complexity

- **Time Complexity:** $O(N)$ — where $N$ represents the maximum length of the binary string. Converting the binary strings takes $O(N)$ time, while computing the GCD via Euclidean Algorithm takes $O(\log N)$ time per test case.
- **Space Complexity:** $O(1)$ — constant auxiliary space required.