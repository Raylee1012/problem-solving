# UVa 10409 - Die Game

- **Problem Link:** [UVa 10409 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1350)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Simulate the rolling movements of a standard six-sided die across a flat surface following directional commands (`north`, `east`, `south`, `west`), and output the final value on the top face.
- **Initial State Representation:**
  - `top = 1`, `bottom = 6`
  - `north = 2`, `south = 5`
  - `west = 3`, `east = 4`
- **Face State Transitions:**
  - **North:** `top` $\leftarrow$ `south`, `south` $\leftarrow$ `bottom`, `bottom` $\leftarrow$ `north`, `north` $\leftarrow$ `top` (west/east unchanged).
  - **South:** `top` $\leftarrow$ `north`, `north` $\leftarrow$ `bottom`, `bottom` $\leftarrow$ `south`, `south` $\leftarrow$ `top` (west/east unchanged).
  - **East:** `top` $\leftarrow$ `west`, `west` $\leftarrow$ `bottom`, `bottom` $\leftarrow$ `east`, `east` $\leftarrow$ `top` (north/south unchanged).
  - **West:** `top` $\leftarrow$ `east`, `east` $\leftarrow$ `bottom`, `bottom` $\leftarrow$ `west`, `west` $\leftarrow$ `top` (north/south unchanged).

---

## Complexity

- **Time Complexity:** $O(N)$ — where $N$ is the number of rolling commands per test case. Each movement transition performs constant-time $O(1)$ variable swaps.
- **Space Complexity:** $O(1)$ — constant space required for scalar face state variables and strings.