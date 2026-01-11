# Integer Magnitude Upper Bound Calculator

This project implements a numerical algorithm in C that determines the **Magnitude Upper Bound** of a given integer. It calculates the largest possible integer value that shares the same number of digits as the input.

## 🧮 Mathematical Concept

For any integer $x$, let $d$ be the number of digits (magnitude).
The algorithm constructs the maximum value $M$ such that:

$$M = \sum_{i=0}^{d-1} 9 \times 10^i = 10^d - 1$$

This represents the "ceiling" value for that specific digit class (e.g., for any 3-digit number, the ceiling is 999).

## ⚙️ Algorithm Logic

1.  **Input Normalization:** Handles negative inputs by converting them to absolute values (`abs`).
2.  **Digit Analysis:**
    * Checks edge case $0$ (1 digit).
    * Uses a logarithmic approach (iterative division by 10) to count digits: $d = \lfloor \log_{10}|x| \rfloor + 1$.
3.  **Output Generation:**
    * Instead of using `pow()` functions (which can be computationally expensive), it uses a linear loop to print the character '9', $d$ times.

## 🚀 Usage Example

```text
Input:  1253  (4 digits)
Logic:  Capacity = 4 -> Generate '9' x 4
Output: 9999

Input:  -50   (2 digits)
Logic:  Capacity = 2 -> Generate '9' x 2
Output: 99
