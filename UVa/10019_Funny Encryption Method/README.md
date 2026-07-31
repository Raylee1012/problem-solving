# UVa 10019 - Funny Encryption Method

- **Problem Link:** [UVa 10019 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=960)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Calculate the number of set bits (1s) in the binary representation of $M$ treated as a decimal integer ($b_1$), and treated as a hexadecimal integer ($b_2$).
- **Decimal Bit Counting ($b_1$):** Count 1-bits directly by repeated division by 2 (`num % 2 == 1`).
- **Hexadecimal Conversion ($b_2$):** Convert the digits of $M$ from hexadecimal to decimal (`hexTodec`), then reuse the bit-counting function on the converted value.

---

## Complexity

- **Time Complexity:** $O(N)$ — where $N$ is the number of test cases.
- **Space Complexity:** $O(1)$ — constant memory required to store bit counts and temporary variables.