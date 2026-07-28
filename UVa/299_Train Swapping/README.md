# UVa 299 - Train Swapping

- **Problem Link:** [UVa 299 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=235)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Calculate the minimum number of adjacent swaps required to sort an array of train carriages in ascending order.
- **Bubble Sort & Inversion Count:** The minimum number of adjacent swaps needed to sort an array equals the total number of inversions. Bubble sort directly simulates this process and counts each exchange.
- **Nested Loops:** Compare each pair $(i, j)$ where $i < j$. Swapping out-of-order pairs (`arr[i] > arr[j]`) increments the swap counter until the sequence is fully ordered.

---

## Complexity

- **Time Complexity:** $O(N^2)$ — where $N$ is the length of the train array (at most 50).
- **Space Complexity:** $O(N)$ — required space to store the train carriage sequence for each test case.