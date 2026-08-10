# UVa 10071 - Back to High School Physics

- **Problem Link:** [UVa 10071 Online Judge](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1012)
- **Source Code:** [solution.cpp](./solution.cpp)
- **Language:** C++

---

## Summary & Technical Highlights

- **Goal:** Calculate the displacement of a particle in $2t$ seconds given its velocity $v$ at time $t$, starting from rest with constant acceleration.
- **Kinematics Formula:**
  - Given initial velocity $v_0 = 0$ and constant acceleration $a$, velocity at time $t$ is $v = a \cdot t \implies a = \frac{v}{t}$.
  - Displacement after $2t$ seconds is $s = \frac{1}{2} a (2t)^2 = \frac{1}{2} \cdot \left(\frac{v}{t}\right) \cdot 4t^2 = 2vt$.
- **Implementation:** Directly computes and outputs $2 \cdot v \cdot t$ for each input pair until EOF.

---

## Complexity

- **Time Complexity:** $O(N)$ — where $N$ is the number of input test cases. Each input pair is processed in $O(1)$ constant time.
- **Space Complexity:** $O(1)$ — constant space required for storing $v$ and $t$.