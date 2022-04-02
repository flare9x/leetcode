/* 1822. Sign of the Product of an Array

There is a function signFunc(x) that returns:

1 if x is positive.
-1 if x is negative.
0 if x is equal to 0.
You are given an integer array nums. Let product be the product of all values in the array nums.

Return signFunc(product). 

Constraints:

1 <= nums.length <= 1000
-100 <= nums[i] <= 100

76 / 76 test cases passed.
Status: Accepted
Runtime: 7 ms
Memory Usage: 10.2 MB
Submitted: 2 minutes ago

Success
Details 
Runtime: 7 ms, faster than 69.99% of C++ online submissions for Sign of the Product of an Array.
Memory Usage: 10.2 MB, less than 85.87% of C++ online submissions for Sign of the Product of an Array.
*/




class Solution {
public:
    
    double signFunc(double x) {
        if (x > 0.0){
            return 1;
        } else if (x < 0.0) {
            return -1;
        } else if (x == 0.0) {
            return 0;
            }
        return 0;
        }
    int arraySign(vector<int>& nums) {
        double product = 1.0;
        int out = 0;
        for (int i = 0; i < nums.size(); i++) {
            product = product * double(nums[i]);
            }

        out = signFunc(product);
        return out;
    }
}; 