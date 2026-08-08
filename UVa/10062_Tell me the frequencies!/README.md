# UVa 10062 - Tell me the frequencies!

- **Problem Link:** [UVa 10062 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1003)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Count the frequencies of ASCII characters for each line of input and print their ASCII values and counts sorted by frequency ascending, then by ASCII value descending on ties.
- **Custom Comparator (`cmp`):**
  - Primary sort: Frequency ascending (`cnt[a] < cnt[b]`).
  - Secondary tie-breaker: ASCII value descending (`a > b`).
- **Fixed-size Array Sorting:** Collects present ASCII characters into `chars[128]` and sorts them using `std::sort`. Since the array size is bounded by $128$, sorting takes $O(1)$ constant time.
- **Output Formatting:** Handles blank line separation between consecutive test case outputs using a `first` boolean flag.

---

## Complexity

- **Time Complexity:** $O(N)$ — where $N$ is the length of the string per line. Scanning takes $O(N)$ time, while sorting at most 128 elements takes $O(1)$ constant time.
- **Space Complexity:** $O(1)$ — constant space required for fixed-size 128-element frequency and character arrays.