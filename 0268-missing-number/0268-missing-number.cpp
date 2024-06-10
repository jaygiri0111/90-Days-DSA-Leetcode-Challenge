//method 1
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for (int i = 0; i < n; i++) {
            if (nums[i] != i) {
                return i;
            }
        }

        return n;
    }
};

/*
// Method 2 using sum method
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum1 = n * (n + 1) / 2;
        int sum2 = 0;
        for (int i = 0; i < n; i++) {
            sum2 = sum2 + nums[i];
        }

        return sum1 - sum2;
    }
};
// Time complexity -> O(n)
// space complexity -> O(1)

*/