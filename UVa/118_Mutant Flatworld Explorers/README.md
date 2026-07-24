# UVa 118 - Mutant Flatworld Explorers

- **Problem Link:** [UVa 118 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=54&mosmsg=Submission+received+with+ID+31224102)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Simulate grid-based movement for multiple robots on a bounded rectangular map and mark locations where robots fall off ("LOST") to leave a warning scent for subsequent robots.
- **Direction State Machine:** Use conditional logic to switch orientation (`N`, `E`, `S`, `W`) based on turn commands (`L` and `R`), and update coordinates `(newX, newY)` when moving forward (`F`).
- **Scent Warning System:** Maintain a 2D boolean array `scent[51][51]`. If an out-of-bounds move occurs on a scented grid, ignore the instruction; otherwise, mark `scent[x][y] = true`, set status to `LOST`, and terminate instructions.

---

## Complexity

- **Time Complexity:** $O(N)$ — where $N$ is the length of the instruction string for each robot (at most 100 characters).
- **Space Complexity:** $O(1)$ — constant space requirement using a fixed $51 \times 51$ array for grid scent markers.