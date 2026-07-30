# UVa 10008 - What's Cryptanalysis?

- **Problem Link:** [UVa 10008 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=949)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Count the frequencies of uppercase and lowercase letters across $N$ lines of text and output them sorted primarily by frequency descending, then alphabetically ascending.
- **Frequency Counting:** Case-insensitively count letter occurrences into a fixed frequency array `count[26]`.
- **In-place Bubble Sort:** Use nested loops with custom swapping logic (`count[i] < count[j]` or frequency tie with `letters[i] > letters[j]`) to sort frequencies in descending order while maintaining alphabetical order for ties.

---

## Complexity

- **Time Complexity:** $O(N)$ — where $N$ is the total length of input text across all lines (sorting a fixed array of 26 elements runs in $O(1)$ constant time).
- **Space Complexity:** $O(1)$ — constant space required for fixed-size 26-element arrays.