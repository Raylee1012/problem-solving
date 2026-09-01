# UVa 10222 - Decode the Mad man

- **Problem Link:** [UVa 10222 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1163)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Decode an encoded string typed on a standard QWERTY keyboard by shifting each character two positions to the left on the keyboard layout.
- **Keyboard Map Modeling:**
  - Uses a flattened string representation of the keyboard rows: ``"`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./"``.
  - Preserves spaces directly.
  - Converts characters to lowercase with `std::tolower` before finding their position in the lookup string.
- **Decoding Mechanism:**
  - When the character's index `pos >= 2`, decodes it as `keyboard[pos - 2]`.

---

## Complexity

- **Time Complexity:** $O(N)$ — where $N$ is the total number of characters in the input string. Searching the fixed-length keyboard string takes $O(1)$ constant time per character.
- **Space Complexity:** $O(1)$ — constant space required for the keyboard layout string and variables.