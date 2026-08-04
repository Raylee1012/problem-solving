# UVa 10041 - Vito's Family

- **Problem Link:** [UVa 10041 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=982)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Find a house location (street number) that minimizes the sum of absolute distances to all relatives' streets.
- **Median Property:** The optimal location that minimizes the sum of absolute deviations is the median element of the sorted street positions.
- **Sorting & Distance Sum:** Sort the relative street locations using `std::sort`, pick the median element at index `r / 2`, and calculate the total absolute distance to all relatives.

---

## Complexity

- **Time Complexity:** $O(N^2)$ — where $N$ is the number of relatives ($r$). Sorting and iterating through street coordinates bounds the overall runtime per test case.
- **Space Complexity:** $O(N)$ — space required to store the street locations in an array.