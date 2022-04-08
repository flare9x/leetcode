/* 1790. Check if One String Swap Can Make Strings Equal

You are given two strings s1 and s2 of equal length. A string swap is an operation where you choose two indices in a string (not necessarily different) 
and swap the characters at these indices.

Return true if it is possible to make both strings equal by performing at most one string swap on exactly one of the strings. Otherwise, return false.


Success
Details 
Runtime: 2 ms, faster than 50.02% of C++ online submissions for Check if One String Swap Can Make Strings Equal.
Memory Usage: 6.2 MB, less than 63.01% of C++ online submissions for Check if One String Swap Can Make Strings Equal. */


class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int sum_non = 0;
        bool ans;
        char carry_s1 = ' ';
        char carry_s2 = ' ';
        for (int i = 0; i < s1.size(); i++) {
            // case 1 - elements are true
            if (s1[i] == s2[i]) {
                ans = true;
            } else {
                // check the initial non matching characters of s1 and s2 match if they are swapped
                if (carry_s1 == s2[i] && carry_s2 == s1[i]) {
                    ans = true;
                } else {
                    ans = false;
                }
                // case 2 - when element does not match sum the total non matches
                sum_non++;
                // save the non matching characters for comparrison
                carry_s1 = s1[i];
                carry_s2 = s2[i];
            }
        }
        // check the outcomes 
        // as at most can have exactly one swap this can be true but the characaters can be non matching also
        // check characters that are being swapped match and check that there is only 1x swap possible
        if (sum_non == 2 && ans != false || sum_non == 0 && ans != false) {
            ans = true;
        } else {
            ans= false;
        }
        return ans;
    }
};