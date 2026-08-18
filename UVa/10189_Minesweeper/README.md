# UVa 10189 - Minesweeper

- **Problem Link:** [UVa 10189 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1130)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Transform a minefield grid containing mines (`*`) and empty cells (`.`) into a Minesweeper board where each empty cell displays the count of adjacent mines in 8 directions.
- **8-Directional Search:**
  - Iterates through coordinate offsets `di` and `dj` ranging from `-1` to `1`.
  - Performs boundary checking (`ni >= 0 && ni < n && nj >= 0 && nj < m`) before inspecting neighboring cells.
- **Output Formatting:** Prints a blank line between consecutive field outputs using a `first` boolean flag.

---

## Complexity

- **Time Complexity:** $O(N)$ — where $N$ represents the total number of cells in the grid ($N = n \times m$). Inspecting 8 neighbors for each cell takes $O(1)$ constant time.
- **Space Complexity:** $O(N)$ — auxiliary space required to store the $N$-cell grid in memory.