/* 976. Largest Perimeter Triangle 

Given an integer array nums, return the largest perimeter of a triangle with a non-zero area, 
formed from three of these lengths. 
If it is impossible to form any triangle of a non-zero area, return 0.

        /*  Step 1 - sort in ascending order because we need the largest perimeter
            Step 2 - Run a reverse loop 
            Step 3 - Use triangle inequality theorum to determine if the 3x sides can make a triangle.
            The condition that the sum of any two sides must exceed the third. 
            Example - All true:
            a + b > c
            c + b > a
            c + a > b
            Or
            If only 1x is not true (< or <=) to the third then 3 sides, their length can not make a triangle.
            Step 4 - Check area using Herons Formula 
            Step 5 - If triangle condition satisfied and area is non zero break the reverse loop found match 
            and no need to continue looping over the full array */ 

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        double triangle_area = 0.00;
        double triangle_perimeter = 0.00;
        sort(nums.begin(),nums.end()); /* sort in ascending  */
        int len = nums.size();
        int i = 0;
         for (i = len -1; i >= 2; i--) {
             if (nums[i-2] + nums[i-1] > nums[i]) {
                    double s = (double(nums[i-2]) + double(nums[i-1]) + double(nums[i])) / 2;
                 triangle_area = (sqrt(s*(s - double(nums[i-2]))*(s - double(nums[i-1]))*(s - double(nums[i]))));
                 if (triangle_area > 0) {
                 triangle_perimeter = nums[i-2] + nums[i-1] + nums[i]; 
                     break;
         } else {
            triangle_perimeter = 0;
                     }
                 }
             }
        return triangle_perimeter;
    }
};
