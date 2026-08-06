# UVa 10056 - What is the Probability?

- **Problem Link:** [UVa 10056 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=997)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Calculate the probability that the $I$-th player wins a game played sequentially by $N$ players, given each event has success probability $p$.
- **Infinite Geometric Series:** The probability of player $I$ winning in round 1 is $q^{I-1} \cdot p$ (where $q = 1 - p$). Since the game repeats infinitely until someone wins, the overall probability forms an infinite geometric series with common ratio $q^N$, summing to:
  $$\text{Probability} = \frac{q^{I-1} \cdot p}{1 - q^N}$$
- **Edge Case Handling:** Output `0.0000` immediately if $p = 0.0$ to prevent division by zero in the closed-form formula.

---

## Complexity

- **Time Complexity:** $O(N)$ — where $N$ is the number of test cases.
- **Space Complexity:** $O(1)$ — constant space required for storing input variables.