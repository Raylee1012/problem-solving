# UVa 10922 - 2 the 9s

- **Problem Link:** [UVa 10922 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1863)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Determine whether a very large positive integer (up to 1000 digits) is a multiple of 9, and if so, calculate its "9-degree" (the number of recursive digit-summing steps required to reduce it to 9).
- **String Parsing & Digit Summation:**
  - Reads the input integer as a string `number` to safely accommodate arbitrarily large values exceeding standard 64-bit limits.
  - Computes the initial sum of digits via `digitsum(number)`.
- **9-Degree Recursive Evaluation:**
  - If the initial digit sum is not divisible by 9 (`sum % 9 != 0`), output that the number is not a multiple of 9.
  - Otherwise, initialize `degree = 1`. Repeatedly sum digits of the current value via `digitsum(to_string(sum))` and increment `degree` until `sum < 10` (which ultimately reaches 9).

---

## Complexity

- **Time Complexity:** $O(N)$ — where $N$ is the number of digits in the input string. Calculating the initial digit sum takes $O(N)$ time. Subsequent recursive digit sums operate on numbers smaller than $9 \times 1000 = 9000$, which reduces in $O(1)$ operations.
- **Space Complexity:** $O(N)$ — memory required to store the input number string.