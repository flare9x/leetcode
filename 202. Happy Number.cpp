/* 
202. Happy Number

Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:

Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.

Constraints:

1 <= n <= 231 - 1

Happy numbers always converge to 1 and for the following iterations, the output will stay as 1. Eg: 19 -> 82 -> 68 -> 100 -> 1 -> 1 -> 1 ...... stays at 1

Unhappy numbers eventually enter a cycle which repeats. Eg: 2 -> 4 -> 16 -> 37 -> 58 -> 89 -> 145 -> 42 -> 20 -> 4 -> 16 -> 37 -> 58 -> 89 -> 145 -> 42 -> 20 -> 4

Notice that the cycle repeats from 4 in the above example (an infinite loop).


404 / 404 test cases passed.
Status: Accepted
Runtime: 3 ms
Memory Usage: 6.3 MB
Submitted: 1 minute ago

Success
Details 
Runtime: 3 ms, faster than 55.76% of C++ online submissions for Happy Number.
Memory Usage: 6.3 MB, less than 23.88% of C++ online submissions for Happy Number.
    
    */
    
class Solution {
private:
    
    /* split the integer, square and sum and output the final number*/
    int NextNumber(int n) {
        int number = n;
        int sum = 0;
        int remainder = 0;
        while (number > 0) {
            remainder = number % 10; /* modulo (remainder) */
            number /= 10; /* division assignment */
            sum += remainder*remainder; /* square and sum */
        }
    return sum;
    }
    
public:
bool isHappy(int n) {
    int temp = n;
    std::unordered_set<int> seen;
    while (temp != 1) {
        temp = NextNumber(temp);
        /*  find returns the key if it is found,
        else it returns the end iterator if key is not found */
        if (seen.find(temp) != seen.end()) {
            return temp == 0;
        }
        seen.insert(temp);
        }
            return temp == 1;
}
};