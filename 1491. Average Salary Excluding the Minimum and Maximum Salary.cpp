/* 1491. Average Salary Excluding the Minimum and Maximum Salary */

class Solution {
public:
    double average(vector<int>& salary) {
        /* initialize output array */
        int n = salary.size();
        int max_arr[n];
        int min_arr[n];
        max_arr[0] = salary[0];
        min_arr[0] = salary[0];
        int max_val = 0;
        int min_val = 0;
        int sum_arr[n];
        sum_arr[0] = salary[0];
        int subset[n];
        double mean_val = 0.000;
        int final_n = 0;
          for (int i = 1; i < salary.size(); ++i) {
              /* find the maximum */
              if (salary[i] > max_arr[i-1]) {
                 max_arr[i] = salary[i];
             } else {
                 max_arr[i] = max_arr[i-1];
                 }
              /*  find  minimum */
             if (salary[i] < min_arr[i-1]) {
                 min_arr[i] = salary[i];
             } else {
                 min_arr[i] = min_arr[i-1];
                 }
         }
        max_val = max_arr[n-1];
        min_val = min_arr[n-1];
        /* subset to remove min and max */
        int n_count = 0;
        for (int i = 0; i < salary.size(); ++i) {
            if (salary[i] == max_val || salary[i] == min_val) {
                subset[i] = 0;
            } else {
                subset[i] = salary[i];
                n_count++; /* count the values remaining use for the mean below */
            }
        }
        /* run sum */
        sum_arr[0] = subset[0];
                for (int i = 1; i < salary.size(); ++i) {
                    sum_arr[i] = subset[i] + sum_arr[i-1];
        }

        /* mean */
        mean_val = sum_arr[n-1] / double(n_count);

        return mean_val;
    }
};