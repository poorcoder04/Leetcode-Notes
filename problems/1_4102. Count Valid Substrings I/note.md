- this is slinding window + two pointers problem
- main idea how many valid range end at each index
- let say i = 2, [2,2], [1,2], [0,2] are valid
- just choose the left index carefully if you get abc then valide left index is  start from b.
![alt text](image.png) 



# 4102. Count Valid Substrings I
Link: https://leetcode.com/problems/count-valid-substrings-i/
Difficulty: Medium | Pattern: count by right endpoint
Date: 2026-11-09 | Solved: with help 

## Problem (1 line)
Count substrings that don't contain "abc".

## Brute force and why it fails
O(n^2) substrings, n = 1e5, too slow.

## Key insight
Fix right end r. Invalid is monotone in l, so one boundary `last`.
Answer += r - last.

## Trigger (how to recognize it next time)
"Count substrings with NO forbidden pattern" -> fix r, find boundary.

## Mistakes / traps
int overflow -> use long long.

## Complexity
O(n) time, O(1) space

## Related
LC 713, 930, 1358
