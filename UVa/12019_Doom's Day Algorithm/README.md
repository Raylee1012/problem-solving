# UVa 12019 - Doom's Day Algorithm

- **Problem Link:** [UVa 12019 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3170)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Determine the day of the week for any given date in the year 2011, given month $M$ and day $D$.
- **Doomsday Algorithm / Anchor Days:**
  - Uses the Doomsday rule with fixed reference dates for each month in 2011 that always fall on Monday:
    - `doom = {-1, 10, 21, 7, 4, 9, 6, 11, 8, 5, 10, 7, 12}` (1-indexed for months 1 to 12).
    - E.g., Jan 10, Feb 21, Apr 4, May 9, Jun 6, Jul 11, Aug 8, Sep 5, Oct 10, Nov 7, and Dec 12 were all Mondays in 2011.
- **Modular Offsetting & Negative Modulo Handling:**
  - Calculates the day offset via $k = (D - \text{doom}[M]) \pmod 7$.
  - In C++, the `%` operator preserves the negative sign; handles negative results by mapping $k < 0$ to $k + 7$.
  - Directly accesses the day of the week string using `date[k]`.

---

## Complexity

- **Time Complexity:** $O(1)$ — array lookup, basic subtraction, and modulo arithmetic run in strictly constant time per date query.
- **Space Complexity:** $O(1)$ — uses only a fixed-size anchor array and string lookup table.