/*
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
//time complexity --> O(nlogn)--> used sort function
//space complexity -> O(1)
*/
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
// method 3 using XoR Function
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = ans ^ nums[i];
        }

        for (int i = 0; i <=n; i++) {
            ans = ans ^ i;
        }
        return ans;

        // return sum1 - sum2;
    }
};