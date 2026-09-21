# UVa 11005 - Cheapest Base

- **Problem Link:** [UVa 11005 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1946)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Given the printing costs for 36 alphanumeric digits (`0`-`9`, `A`-`Z`), find the base(s) $b \in [2, 36]$ that minimize the total cost of representing a given non-negative integer.
- **Base Conversion & Cost Evaluation:**
  - Iterates over all candidate bases $b$ from 2 to 36.
  - For each base, repeatedly extracts digits using modular arithmetic (`temp % b`), looks up each digit's cost in `cost[]`, and divides `temp /= b`.
  - Handles the edge case `query_num == 0` directly by using `cost[0]`.
  - Maintains `min_cost` as the global minimum cost observed across all 35 evaluated bases.
- **Result Output:**
  - Collects and prints all bases matching `min_cost` in ascending order.
  - Prints blank lines between test cases without trailing blank lines.

---

## Complexity

- **Time Complexity:** $O(\log N)$ — where $N$ represents the query number. For each query, evaluating all 35 bases takes $35 \times \lfloor \log_b N + 1 \rfloor$ operations. Because the number of bases is a constant (35), the runtime per query scales with $O(\log N)$.
- **Space Complexity:** $O(1)$ — constant memory used for the 36 character costs and 37 base cost entries.