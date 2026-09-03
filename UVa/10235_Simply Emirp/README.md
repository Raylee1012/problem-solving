# UVa 10235 - Simply Emirp

- **Problem Link:** [UVa 10235 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1176)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Determine whether an input integer $n$ is `not prime`, `prime`, or `emirp` (a prime number whose reversed integer is a distinct prime).
- **Primality Testing (`check_prime`):**
  - Handles numbers $< 2$ as non-prime.
  - Loops trial divisors from $2$ up to $\lfloor\sqrt{n}\rfloor$ (`i * i <= n`). The inclusive boundary is critical for identifying non-prime squares (e.g., $4, 9, 25$).
- **Number Reversal (`reverse_num`):**
  - Extracts base-10 digits into a buffer and reconstructs the reversed integer.
- **Emirp Classification:**
  - $n$ must be prime.
  - The reversed number must also be prime.
  - The reversed number must differ from $n$ ($rev \ne n$, meaning palindromic primes such as $11$ or $101$ are classified as `prime`, not `emirp`).

---

## Complexity

- **Time Complexity:** $O(\sqrt{N})$ — where $N$ is the numeric value of the input integer $n$. Trial division up to $\sqrt{N}$ dominates the computation per test case.
- **Space Complexity:** $O(1)$ — constant space used for digit buffer and scalar variables.