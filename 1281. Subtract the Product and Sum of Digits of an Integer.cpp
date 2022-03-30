/* 1281. Subtract the Product and Sum of Digits of an Integer 

Given an integer number n, return the difference between the product of its digits and the sum of its digits.*/ 

/* Success
Details 
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Subtract the Product and Sum of Digits of an Integer.
Memory Usage: 6 MB, less than 26.91% of C++ online submissions for Subtract the Product and Sum of Digits of an Integer. */

class Solution {
public:
    int sum = 0; 
    int product = 1; /* initialize the product with 1 vs 0 (for obvious reasons!) */
    int subtractProductAndSum(int n) {
        int number = n;
        while (number > 0) {
            int digit = number % 10; /* modulo (remainder) */
            number /= 10; /* division assignment */
            sum = digit+sum; /* sum each */
            product = digit*product; /* multiply each */
        }
    return product - sum;
    }
};
