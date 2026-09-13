# UVa 490 - Rotating Sentences

- **Problem Link:** [UVa 490 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=431)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Rotate multiple lines of text $90^\circ$ clockwise such that the first sentence becomes the rightmost column and earlier characters appear toward the top.
- **Dynamic 2D Traversal & In-Place Padding:**
  - Collects all input lines into a `std::vector<std::string>` while keeping track of the maximum line length `maxLen`.
  - Outer loop iterates column indices from `0` to `maxLen - 1`.
  - Inner loop traverses the stored sentences in reverse order from index `sentences.size() - 1` down to `0`.
  - If a sentence has fewer than `i + 1` characters, prints a blank space `' '` to preserve grid alignment without mutating original strings.
- **Type Safety:**
  - Explicitly casts `sentences[j].length()` to `(int)` to prevent signed/unsigned integer comparison mismatches.

---

## Complexity

- **Time Complexity:** $O(N^2)$ — where $N$ represents the maximum dimension of the text grid ($\max(\text{rows}, \text{maxLen})$). Traversal requires visiting all cells in the rotated grid.
- **Space Complexity:** $O(N^2)$ — memory needed to store all lines of sentences in a vector.