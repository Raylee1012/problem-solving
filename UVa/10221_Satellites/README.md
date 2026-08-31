# UVa 10221 - Satellites

- **Problem Link:** [UVa 10221 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1162)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Calculate the arc distance and chord distance between two satellites orbiting Earth at a distance $s$ above Earth's surface (radius $r = 6440$ km) with a given angular distance $a$.
- **Angle Conversion & Normalization:**
  - Converts minutes (`min`) to degrees by dividing by 60.
  - Normalizes angles greater than $360^\circ$ using modulo equivalence, and reduces angles $> 180^\circ$ to the minor angle ($360^\circ - a$).
  - Converts degrees to radians: $\text{rad} = a \times \frac{\pi}{180}$.
- **Geometric Calculations:**
  - Total orbital radius: $R = r + s = 6440 + s$.
  - Arc length: $\text{arc} = R \times \text{rad}$.
  - Chord length: $\text{chord} = 2 \times R \times \sin\left(\frac{\text{rad}}{2}\right)$.

---

## Complexity

- **Time Complexity:** $O(1)$ — constant-time trigonometric and arithmetic operations per test case.
- **Space Complexity:** $O(1)$ — constant space required for variables.