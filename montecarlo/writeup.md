# Monte Carlo Algorithm for π Estimation

The Monte Carlo method is a powerful computational algorithm that uses randomness to solve problems that might be deterministic in nature. It is especially useful in scenarios where an analytical solution is complex or impossible to derive. This project implements the Monte Carlo method to estimate the value of Pi (π) by randomly generating points within a unit square.

## Overview of the Algorithm
The method used here involves simulating points inside a square with side lengths of 1 unit. By checking how many of these random points lie inside a quarter circle inscribed in the square, we can estimate the ratio between the areas of the circle and the square, which in turn is related to the value of Pi.

- The quarter circle has a radius of 1, and its area is π/4).
- The area of the square is 1.
- The ratio of points falling inside the quarter circle to the total number of points in the square gives an estimate of π/4).

## Steps in the Estimation Process
1. **Generate Random Points:**  
   Two random numbers `x` and `y` are generated between 0 and 1, representing the coordinates of a point inside the square.
   
2. **Check Circle Condition:**  
   For each point, we check if it falls within the quarter circle by evaluating if x^2 + y^2 = 1 ). If true, the point is inside the circle.

3. **Calculate Pi:**  
   The ratio of the number of points inside the quarter circle to the total number of points is approximately π/4). Multiplying this ratio by 4 gives an estimate for Pi.

4. **Simulations:**  
   By running multiple simulations with a large number of points, we can average the results to obtain a more accurate estimate of π.

## Error Calculation
We compare the estimated Pi value with the known value of Pi (3.141592653589793) to compute the percentage error:

```plaintext
Error Percentage = |(Estimated Pi - Actual Pi) / Actual Pi| × 100
```
This error gives an indication of how close the estimation is to the actual value.

## Advantages and Limitations
**Advantages:**
- Simple to implement and understand.
- Can achieve better accuracy by increasing the number of random points.

**Limitations:**
- Requires a large number of points to achieve high precision.
- Not the most efficient algorithm for calculating π compared to other mathematical techniques.

## Conclusion
The Monte Carlo method demonstrates the effectiveness of using randomness to solve mathematical problems. Although it may not be the fastest method for estimating Pi, it serves as an excellent example of statistical simulation. The accuracy improves with an increase in the number of random samples, making it a valuable tool for approximate solutions in complex scenarios.
