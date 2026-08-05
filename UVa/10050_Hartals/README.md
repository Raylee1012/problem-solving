# UVa 10050 - Hartals

- **Problem Link:** [UVa 10050 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=991)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Calculate the number of working days lost due to political strikes (hartals) across $N$ simulation days, ignoring weekends.
- **Hartal Marking:** Use a boolean array `hartal` to mark days on which any party calls a strike (`j += h[i]`).
- **Weekend Filtering:** Iterate from day $1$ to $N$, treating day % 7 == 6 as Friday and day % 7 == 0 as Saturday. Increment `lost` only when a strike occurs on a weekday.

---

## Complexity

- **Time Complexity:** $O(N)$ — where $N$ is the number of simulation days per test case.
- **Space Complexity:** $O(N)$ — space required for the boolean marking array (up to 3650 days).