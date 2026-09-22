# UVa 11150 - Cola

- **Problem Link:** [UVa 11150 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2091)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Determine the maximum number of colas one can drink starting with $N$ full bottles, given that 3 empty bottles can be exchanged for 1 new full bottle, and one empty bottle may be borrowed (provided it can be returned).
- **Iterative Bottle Exchange Simulation:**
  - Starts by drinking all $N$ initial bottles (`ans = N`).
  - While having at least 3 empty bottles (`N >= 3`), exchanges $N / 3$ new bottles to drink (`ans += N / 3`), and updates the empty bottle inventory to `N / 3 + N % 3`.
- **Borrowing Mechanism:**
  - If exactly 2 empty bottles remain (`N == 2`), one bottle can be borrowed to make 3 empties, exchanged for 1 full bottle, consumed, and the resulting empty bottle is returned to the lender (`ans += 1`).
  - If only 1 bottle remains, borrowing is impossible because 2 borrowed bottles would be needed (violating the rule of borrowing at most one).

---

## Complexity

- **Time Complexity:** $O(\log N)$ — where $N$ represents the initial number of cola bottles. Each exchange cycle reduces the total number of empty bottles by approximately a factor of 3, running in logarithmic iterations.
- **Space Complexity:** $O(1)$ — requires only scalar integer variables.