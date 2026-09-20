# UVa 10929 - You can say 11

- **Problem Link:** [UVa 10929 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1870)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Determine whether an arbitrarily large positive integer (up to 1000 digits) is divisible by 11.
- **Divisibility Rule for 11:**
  - A decimal integer is divisible by 11 if and only if the alternating sum of its digits (sum of odd-positioned digits minus sum of even-positioned digits) is a multiple of 11:
    $$(S_{\text{odd}} - S_{\text{even}}) \pmod{11} = 0$$
- **Big Integer Parsing via String:**
  - Reads the input as `std::string N` to avoid 64-bit integer overflow.
  - Traverses characters by index `i` to accumulate sums into `odd` and `even`.
  - Terminates when input string equals `"0"`.

---

## Complexity

- **Time Complexity:** $O(N)$ — where $N$ is the number of digits in the string. Traverses all digits once in a single linear pass.
- **Space Complexity:** $O(N)$ — space required to store the number string $N$.