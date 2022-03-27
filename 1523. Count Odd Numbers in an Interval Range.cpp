/* 1523. Count Odd Numbers in an Interval Range */
/*84 / 84 test cases passed.
Status: Accepted
Runtime: 0 ms
Memory Usage: 6 MB
Submitted: 6 hours, 6 minutes ago */


class Solution {
public:
    int countOdds(int low, int high) {
        int odd_count = 0;
        /* case 1 - low is even and high is odd */
        if (high - low >1) {
            if (low % 2 == 0 && high % 2 != 0) {
                odd_count = ((double(high) - double(low))/2.0)+0.5;
                /* # case 2 - low is even and high is even */
                } else if (low % 2 == 0 && high % 2 == 0) {
                odd_count = (high - low)/2;
                /* # case 3 - low is odd and high is even */
            } else if (low % 2 != 0 && high % 2 == 0) {
                odd_count = int(((double(high) - double(low))/2.0)+.5);
                /* # case 4 - low is odd and high is odd */
            } else if (low % 2 != 0 && high % 2 != 0) {
                odd_count = ((high-low)/2) + 1;
            }
        } else if (high - low == 0) { /* # when same numbers */
                /* # case five - same odd numbers */
            if (high == low && high % 2 != 0) {
                odd_count = 1;
                /* # case six - same even numbers */
            } else if (high == low && high % 2 == 0) {
                odd_count = 0;
            }
        } else if (high - low == 1) { /* # when only 1 number */
            /* # case seven - low - high = 1 when low is odd and high is even */
            if (low % 2 != 0 && high % 2 == 0) {
                odd_count = 1;
            /* # case eight - low - high = 1 when low is even and high is odd */
            } else if (low % 2 == 0 && high % 2 != 0) {
                odd_count = 1;
            } 
        } 
    return odd_count;
}
};
