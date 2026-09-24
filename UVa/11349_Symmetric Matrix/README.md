# UVa 11349 - Symmetric Matrix

- **Problem Link:** [UVa 11349 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2324)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Determine whether an $N \times N$ matrix is symmetric with respect to its center and consists exclusively of non-negative elements.
- **Input Parsing:**
  - Reads format strings like `N = 3` using two dummy characters (`ch1`, `ch2`) before capturing the dimension integer `n`.
  - Uses `long long` to prevent potential 32-bit integer overflow as matrix values can be large.
- **Symmetry & Non-negativity Verification:**
  - **Non-negative check:** Every element $M[i][j]$ must satisfy $M[i][j] \ge 0$. If any element is negative, the matrix is immediately classified as `Non-symmetric`.
  - **Point-reflection symmetry:** Checks if each cell satisfies $M[i][j] == M[N - 1 - i][N - 1 - j]$. Any mismatch marks `flag = false` and breaks early.
- **Output:**
  - Prints `Test #X: Symmetric.` or `Test #X: Non-symmetric.`.

---

## Complexity

- **Time Complexity:** $O(N^2)$ — where $N$ is the side dimension of the $N \times N$ matrix. Reading inputs and checking point symmetry each take at most $N \times N$ iterations.
- **Space Complexity:** $O(N^2)$ — auxiliary space required to store the $N \times N$ matrix.