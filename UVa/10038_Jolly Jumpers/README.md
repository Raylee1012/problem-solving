# UVa 10038 - Jolly Jumpers

- **Problem Link:** [UVa 10038 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=979)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Determine if a sequence of $n$ numbers forms a Jolly Jumper sequence, where absolute differences between adjacent elements cover all values from $1$ to $n-1$.
- **Edge Case Handling:** Automatically treat single-element sequences ($n = 1$) as `"Jolly"`.
- **Visited Array:** Use a boolean array `appeared` to record seen difference values. If any difference is out of range ($< 1$ or $\ge n$) or appears more than once, terminate early and mark as `"Not jolly"`.

---

## Complexity

- **Time Complexity:** $O(N)$ — where $N$ is the length of the input sequence per test case.
- **Space Complexity:** $O(N)$ — space required to store the array and visited boolean values (up to 3000 elements).