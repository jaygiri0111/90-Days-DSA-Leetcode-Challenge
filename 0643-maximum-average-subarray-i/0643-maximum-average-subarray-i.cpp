/*
//This code will show Time Limit exceed having time complexity O(n^2)
// method 1
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int maxSum = INT_MIN;
        int i = 0, j = k - 1;
        while (j < n) {
            int sum = 0;
            for (int y = i; y <= j; y++) {
                sum += nums[y];
            }

            maxSum = max(maxSum, sum);
            ++i;
            ++j;
        }
        double maxAvg = maxSum /  (double) k;
        return maxAvg;
    }
};
*/

// Method -02 --> Sliding Window Problem
// Time Complexity -> O(n)
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int maxSum = INT_MIN;
        int i = 0, j = k - 1;

        int sum = 0;
        for (int y = i; y <= j; y++) {
            sum += nums[y];
        }
        maxSum = sum;
        j++;
        while (j < n) {
            sum -= nums[i];
            sum += nums[j];
            maxSum = max(maxSum, sum);
            i++;
            j++;
        }
        double maxAvg = maxSum / (double)k;
        return maxAvg;
    }
};