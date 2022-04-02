/* 

1779. Find Nearest Point That Has the Same X or Y Coordinate

You are given two integers, x and y, which represent your current location on a Cartesian grid: (x, y). You are also given an array points where each points[i] = [ai, bi] represents that a point exists at (ai, bi). A point is valid if it shares the same x-coordinate or the same y-coordinate as your location.

Return the index (0-indexed) of the valid point with the smallest Manhattan distance from your current location. If there are multiple, return the valid point with the smallest index. If there are no valid points, return -1.

The Manhattan distance between two points (x1, y1) and (x2, y2) is abs(x1 - x2) + abs(y1 - y2).

Success
Details 
Runtime: 177 ms, faster than 80.44% of C++ online submissions for Find Nearest Point That Has the Same X or Y Coordinate.
Memory Usage: 59.4 MB, less than 33.79% of C++ online submissions for Find Nearest Point That Has the Same X or Y Coordinate. */


class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int len = points.size();
        int out = -1; /* set the state to the no valid point state -1 */
        int manhatten_distance = 0;
        int min_dist = 10001; /* initialize first variable higher than the upper constraint 10^4 - carry variable in the loop*/
        /* loop the x and y coords */
        for (int i = 0; i < len; ++i) {
            if (points[i][0] == x || points[i][1] == y) { 
                manhatten_distance = abs(x - points[i][0]) + abs(y - points[i][1]);
                if (manhatten_distance < min_dist) { /* at each iteration if find smaller distance save the index position */
                    min_dist = abs(x - points[i][0]) + abs(y - points[i][1]);
                    out = i;
                }
            }
        }
        return out;
    }
};