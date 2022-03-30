/* 191. Number of 1 Bits 

Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).

Constraints:

The input must be a binary string of length 32 */

/* 601 / 601 test cases passed.
Status: Accepted
Runtime: 3 ms
Memory Usage: 5.8 MB
Submitted: 4 minutes ago */

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count;
        for (count=0; n; count++)
            n &= n - 1; /* bit wise operator */ 
        return count;
    }
};
