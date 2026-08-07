# UVa 10041 - Vito's Family

- **Problem Link:** [UVa 10041 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=982)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Find a house location (street number) that minimizes the sum of absolute distances to all relatives' streets.
- **Median Property:** The optimal location that minimizes the sum of absolute deviations is the median element of the sorted street positions.
- **Sorting & Distance Sum:**
  - Reads $N$ relative street numbers into the `streets` array.
  - Sorts relative positions using `std::sort(streets, streets + r)`.
  - Picks the median `mid = streets[r / 2]` and calculates total absolute distances in a single linear pass.

---

## Complexity

- **Time Complexity:** $O(N \log N)$ — bounded by `std::sort` on $N$ relatives per test case, followed by an $O(N)$ distance summation pass.
- **Space Complexity:** $O(N)$ — space required to store street numbers in an array (up to 500 elements).