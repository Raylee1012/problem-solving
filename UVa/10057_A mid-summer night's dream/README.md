# UVa 10057 - A mid-summer night's dream

- **Problem Link:** [UVa 10057 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=998)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Find the minimum integer $A$ that minimizes $\sum |x_i - A|$, count how many input elements satisfy $lo \le x_i \le hi$, and calculate the total number of possible integer values for $A$.
- **Global Static Array:** Uses a global array `x[10000000]` to safely allocate memory for large inputs without stack overflow.
- **Sorting & Median Extraction:** Sorts $N$ elements using `std::sort(x, x + n)` and extracts lower median `lo = x[(n-1)/2]` and upper median `hi = x[n/2]`.
- **Linear Counting & Range Calculation:**
  - Traverses the array to count elements satisfying `x[i] >= lo && x[i] <= hi`.
  - Computes `diff = hi - lo + 1` to get the count of all integer candidates for $A$.

---

## Complexity

- **Time Complexity:** $O(N \log N)$ — bounded by `std::sort` on $N$ elements, followed by a linear $O(N)$ scan.
- **Space Complexity:** $O(N)$ — memory required for storing up to $10^7$ integers in the global array.