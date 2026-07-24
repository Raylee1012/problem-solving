# UVa 118 - Mutant Flatworld Explorers

- **Problem Link:** [UVa 118 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=54&mosmsg=Submission+received+with+ID+31224102)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++17

---

## Summary & Technical Highlights

- **Goal:** Simulate grid-based movement for multiple robots on a bounded rectangular map and mark locations where robots fall off ("LOST") to leave a warning scent for subsequent robots.
- **Direction & Rotation:**
  - Explicit direction state transitions (`N`, `E`, `S`, `W`) using conditional branch checks for left (`L`) and right (`R`) turns.
- **Scent Warning System:**
  - Maintain a 2D boolean grid `scent[51][51]`.
  - When forward instruction `F` leads to an out-of-bounds coordinate `(newX, newY)`:
    - If `scent[x][y]` is `true`, ignore the current move and continue processing remaining instructions.
    - If `scent[x][y]` is `false`, update `scent[x][y] = true`, set status to `LOST`, and immediately terminate instructions for the current robot.

---

## Complexity

- **Time Complexity:** $O(K)$ per robot — where $K$ is the length of the instruction string (at most 100 characters). Overall time complexity is $O(M \cdot K)$ for $M$ robots.
- **Space Complexity:** $O(1)$ — constant space requirement using a fixed $51 \times 51$ array for grid scent markers.