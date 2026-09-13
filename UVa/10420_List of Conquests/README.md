# UVa 10420 - List of Conquests

- **Problem Link:** [UVa 10420 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1361)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Read conquest logs containing a country name followed by a person's name on each line, tally the total occurrences per country, and display the countries in alphabetical order along with their counts.
- **Input Parsing:**
  - Extracts the country name using `cin >> country`.
  - Discards the remainder of the line using `getline(cin, woman)`.
- **Linear Lookup & Index Sorting:**
  - Checks if the country is already recorded via linear traversal.
  - Increments the count if found; otherwise, appends it as a new distinct country.
  - Sorts an auxiliary `order` index array via a custom comparator (`countries[a] < countries[b]`) to preserve original array positioning.

---

## Complexity

- **Time Complexity:** $O(N^2)$ — where $N$ represents the number of input lines. Linearly scanning existing countries for each of the $N$ records leads to $O(N^2)$ total lookup time in the worst case.
- **Space Complexity:** $O(N)$ — auxiliary space required to store distinct country names and their frequencies.