# UVa 10268 - 498-bis

- **Problem Link:** [UVa 10268 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1209)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Evaluate the first derivative of a polynomial $P(x) = a_0 x^n + a_1 x^{n-1} + \dots + a_{n-1} x + a_n$ at a given integer point $x$.
- **Derivative Representation:**
  - The derivative is given by:
    $$P'(x) = n \cdot a_0 x^{n-1} + (n-1) \cdot a_1 x^{n-2} + \dots + 1 \cdot a_{n-1}$$
  - The constant term $a_n$ vanishes upon differentiation.
- **Horner's Method (Polynomial Evaluation):**
  - Uses Horner's Rule to evaluate the derivative polynomial from highest degree to lowest in $O(N)$ linear time without computing powers explicitly:
    $$\text{result} = \text{result} \times x + a_i \times (n - i)$$
- **Input Parsing:**
  - Reads line-by-line using `cin >> num` and inspects `cin.get() == '\n'` to detect the end of the coefficient line.
  - Casts intermediate products to `long long` to prevent 32-bit integer overflow.

---

## Complexity

- **Time Complexity:** $O(N)$ — where $N$ represents the degree/number of coefficients of the polynomial. Reading the coefficients and evaluating the derivative via Horner's Rule both take linear time.
- **Space Complexity:** $O(N)$ — space required to store the coefficient sequence in a vector.