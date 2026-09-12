# UVa 10415 - Eb Alto Saxophone Player

- **Problem Link:** [UVa 10415 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1356)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Track the number of times each of the 10 fingers must press a key while playing a sequence of musical notes on an Eb Alto Saxophone.
- **Fingering Configuration Mapping:**
  - Uses a boolean lookup table `note_fingers[14][10]` defining which fingers are down for 14 notes (`cdefgabCDEFGAB`).
- **Key Press Detection:**
  - A finger is pressed if and only if it is needed for the current note (`note_fingers[idx][j] == true`) and was not already pressed in the preceding note (`last[j] == false`).
  - Updates the `last` finger state after inspecting all 10 fingers for each note.
- **Input Line Parsing:**
  - Handles potentially empty note strings cleanly with `std::getline`.

---

## Complexity

- **Time Complexity:** $O(N)$ — where $N$ is the number of notes in the song string. Processing each note involves checking a fixed number of fingers (10) and notes (14), which runs in $O(1)$ constant time.
- **Space Complexity:** $O(1)$ — constant space used for lookup tables, finger state arrays, and scalars.