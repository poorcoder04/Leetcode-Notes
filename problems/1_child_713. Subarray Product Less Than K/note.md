- same problem like 4102
- fix the valid left & right end(start from 0) 
- think from right to left
- when invalid adjust the left end

# 713. Subarray Product Less Than K
Link: https://leetcode.com/problems/subarray-product-less-than-k/
Difficulty: Medium | Pattern: sliding window, count by right endpoint
Date: 2026-11-10 | Solved: alone

## Problem (1 line)
Count subarrays whose product is strictly less than k.

## Brute force and why it fails
O(n^2) subarrays, n = 3e4, too slow.

## Key insight
Fix right end i. All nums >= 1, so product only grows as the window grows (monotone in l).
Shrink `valid_left` until product < k, then ans += i - valid_left + 1.

## Trigger (how to recognize it next time)
"Count subarrays with sum/product < K" and all values positive -> sliding window, add window length per right end.

## Mistakes / traps
- k <= 1: guard `valid_left <= i` in the while loop.
- Overflow: product < k <= 1e6 before multiply, times 1000 -> ~1e9, fits int.
- Nested while is still O(N): `valid_left` never resets, so total moves <= N.

## Complexity
O(N) time, O(1) space

## Related
LC 4102, 930, 992, 1358