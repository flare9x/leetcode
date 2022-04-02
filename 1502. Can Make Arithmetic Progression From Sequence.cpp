/*  1502. Can Make Arithmetic Progression From Sequence

A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.

Given an array of numbers arr, return true if the array can be rearranged to form an arithmetic progression. Otherwise, return false.

Constraints:

2 <= arr.length <= 1000
-10^6 <= arr[i] <= 10^6

108 / 108 test cases passed.
Status: Accepted
Runtime: 8 ms
Memory Usage: 9.2 MB
Submitted: 0 minutes ago

Success
Details 
Runtime: 8 ms, faster than 27.28% of C++ online submissions for Can Make Arithmetic Progression From Sequence.
Memory Usage: 9.2 MB, less than 10.92% of C++ online submissions for Can Make Arithmetic Progression From Sequence.

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end()); /* sort in ascending  */
        int gap = 0;
        bool out = true;
        for (int i = 1; i < arr.size(); i++) {
            if (i==1) {
            gap = arr[i] - arr[i-1];
            } else if (i > 1) {
                if (arr[i] - arr[i-1] != gap) {
                    out = false;
                break;
                }
            }
        }

        return out;
    }
};