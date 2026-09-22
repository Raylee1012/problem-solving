# UVa 11063 - B2-Sequence

- **Problem Link:** [UVa 11063 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2004)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Determine whether a given sequence of positive integers $1 \le b_1 < b_2 < \dots < b_N$ forms a $B_2$-Sequence, meaning that all pairwise sums $b_i + b_j$ (for $1 \le i \le j \le N$) are strictly unique.
- **Sequence Validity Checks:**
  - Verifies that all elements satisfy $b_i \ge 1$.
  - Ensures strictly increasing order: $b_i > b_{i-1}$ for all $i \ge 1$.
- **Pairwise Sum Uniqueness via Direct Addressing:**
  - Uses a frequency table `sum[]` of size up to $20001$ to track already observed sums $x = b_i + b_j$.
  - Uses nested loops over all pairs $(i, j)$ with $i \le j$.
  - If `sum[x] > 0`, a collision is detected, immediately marking `flag = false` and breaking early.
- **Formatting:**
  - Follows the required output format `Case #X: It is [not] a B2-Sequence.` followed by two trailing newlines (`\n\n`).

---

## Complexity

- **Time Complexity:** $O(N^2)$ — where $N$ is the number of elements in the sequence. Generating and checking all pairwise sums requires $\frac{N(N + 1)}{2}$ iterations in the worst case.
- **Space Complexity:** $O(N)$ — auxiliary space for the input array of size $N$ and the fixed-size lookup table for maximum possible sum values.