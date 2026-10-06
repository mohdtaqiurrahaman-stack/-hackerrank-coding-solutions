# Bitwise Operators

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Print a pattern of numbers from $1$ to $n$ as shown below.  Each of the numbers is separated by a single space.    

                                4 4 4 4 4 4 4  
                                4 3 3 3 3 3 4   
                                4 3 2 2 2 3 4   
                                4 3 2 1 2 3 4   
                                4 3 2 2 2 3 4   
                                4 3 3 3 3 3 4   
                                4 4 4 4 4 4 4   

**Input Format**

The input will contain a single integer $n$.  

**Constraints**

$1 \le n \le 1000$

**Output Format**

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-06T13:38:23.701Z  

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the calculate_the_maximum function below.
void calculate_the_maximum(int n, int k) {
    // Initialize maximums to 0
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;

    // Nested loops to generate all pairs (a, b) where a < b
    for (int a = 1; a <= n; a++) {
        for (int b = a + 1; b <= n; b++) {
            
            // Calculate the three bitwise operations
            int current_and = a & b;
            int current_or = a | b;
            int current_xor = a ^ b;

            // Update maximum AND if the result is less than k and greater than current max
            if (current_and < k && current_and > max_and) {
                max_and = current_and;
            }
            
            // Update maximum OR if the result is less than k and greater than current max
            if (current_or < k && current_or > max_or) {
                max_or = current_or;
            }
            
            // Update maximum XOR if the result is less than k and greater than current max
            if (current_xor < k && current_xor > max_xor) {
                max_xor = current_xor;
            }
        }
    }

    // Print the results in the required order
    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}


```

---

[View on HackerRank](https://www.hackerrank.com/challenges/printing-pattern-2/problem)