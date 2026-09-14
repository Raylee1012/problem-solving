# UVa 10642 - Can You Solve It?

- **Problem Link:** [UVa 10642 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1583)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Calculate the number of steps required to travel from a starting coordinate $(x_1, y_1)$ to a destination coordinate $(x_2, y_2)$ along a diagonally traversing path covering all non-negative grid points.
- **Diagonal Indexing & Prefix Steps:**
  - Notice that all points with the same diagonal sum $S = x + y$ belong to the same diagonal layer.
  - Before reaching diagonal $S$, all points on layers $0$ through $S - 1$ have already been traversed, totaling:
    $$\frac{S(S + 1)}{2} = \frac{(x + y)(x + y + 1)}{2}$$
  - Along diagonal layer $S$, the path starts at $(0, S)$ and moves point-by-point towards $(S, 0)$. Thus, coordinate $(x, y)$ is the $x$-th step on this layer.
  - The step index of point $(x, y)$ from origin $(0, 0)$ is:
    $$\text{calc}(x, y) = \frac{(x + y)(x + y + 1)}{2} + x$$
- **Distance Computation:**
  - The total steps between two points is simply $\text{calc}(x_2, y_2) - \text{calc}(x_1, y_1)$.
  - Uses `long long` to prevent integer overflow during multiplications.

---

## Complexity

- **Time Complexity:** $O(1)$ — closed-form mathematical formula evaluated in constant time per test case.
- **Space Complexity:** $O(1)$ — constant auxiliary space required.