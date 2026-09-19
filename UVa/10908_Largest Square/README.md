# UVa 10908 - Largest Square

- **Problem Link:** [UVa 10908 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1849)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Given a grid of dimensions $M \times N$ and $Q$ query center points $(r, c)$, find the maximum side length of a square centered at $(r, c)$ where all characters within the square are identical to the character at the center.
- **Concentric Expansion Simulation:**
  - Starts with radius `half = 0` (side length $1$).
  - Incrementally expands the radius `half` outwards layer-by-layer.
  - Verifies boundary constraints: `top >= 0`, `bottom < M`, `left >= 0`, and `right < N`.
  - Scans all cells in the bounded square to verify if each character matches `grid[r][c]`.
  - Breaks immediately upon boundary violation or character mismatch, recording `ans = half * 2 + 1`.
- **Output Requirement:**
  - Echoes the first line of each test case with $M$, $N$, and $Q$.

---

## Complexity

- **Time Complexity:** $O(N^3)$ — where $N$ represents the maximum grid dimension ($\max(M, N)$). For each of the queries, expanding radius by radius up to $O(N)$ checks a square area of size up to $O(N^2)$, bounded by $O(N^3)$ per query.
- **Space Complexity:** $O(N^2)$ — storage required for the $M \times N$ character grid.