# UVa 272 - TEX Quotes

- **Problem Link:** [UVa 272 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=208)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Replace double quote characters (`"`) in text with TeX-style quotes, alternating between opening quotes (``` `` ```) and closing quotes (`''`).
- **Character-by-Character Parsing:** Use `cin.get(c)` to read every character sequentially, ensuring spaces, newlines, and formatting are preserved intact.
- **State Toggle:** Maintain a boolean flag `first` to track whether the current quote is opening (`true`) or closing (`false`), toggling its value upon encountering each `"`.

---

## Complexity

- **Time Complexity:** $O(N)$ — where $N$ is the total number of characters in the input stream.
- **Space Complexity:** $O(1)$ — constant space requirement as processing is done character-by-character without storing the whole input.