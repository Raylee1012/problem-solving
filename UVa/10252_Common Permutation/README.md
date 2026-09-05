# UVa 10252 - Common Permutation

- **Problem Link:** [UVa 10252 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1193)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Given two lowercase strings $a$ and $b$, find the longest common permutation string $x$ such that each character appears in both strings as many times as possible, printed in alphabetical order.
- **Frequency Array Counting:**
  - Maintains two frequency arrays of size 26 (`cnt_a` and `cnt_b`) to count occurrences of characters `'a'` through `'z'`.
  - For each character from `'a'` to `'z'`, the maximum occurrences in the common permutation is $\min(\text{cnt\_a}[i], \text{cnt\_b}[i])$.
- **Natural Alphabetical Ordering:**
  - Iterating from index `0` (`'a'`) to `25` (`'z'`) naturally ensures the constructed result string is lexicographically sorted without requiring an explicit sort.
- **Input Handling:**
  - Uses `std::getline` because inputs can be empty strings.

---

## Complexity

- **Time Complexity:** $O(N)$ — where $N$ represents the maximum length of the input strings ($|a| + |b|$). Tallying character frequencies takes linear time $O(N)$, and constructing the result across 26 lowercase alphabet positions takes $O(1)$ constant time.
- **Space Complexity:** $O(1)$ — uses fixed-size auxiliary frequency arrays of size 26.