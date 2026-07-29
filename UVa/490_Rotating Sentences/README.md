# UVa 490 - Rotating Sentences

- **Problem Link:** [UVa 490 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=431)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Rotate input sentences 90 degrees clockwise and output them character by character.
- **Dynamic Input Storage:** Store all input lines in a `std::vector<std::string>` using `getline()` while tracking the length of the longest sentence `maxLen`.
- **Matrix Rotation Iteration:** Outer loop iterates through character index $i$ from $0$ to `maxLen - 1`. Inner loop iterates backwards from the last sentence down to index $0$. If $i$ falls outside a sentence's length, output a padding space `' '`.

---

## Complexity

- **Time Complexity:** $O(N^2)$ — where $N$ is the maximum dimension of the sentence matrix (max sentence length and total lines).
- **Space Complexity:** $O(N^2)$ — required memory to store all input sentences in the vector matrix.