// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> ans;
//         int n = nums.size();
//         sort(nums.begin(), nums.end());
//         int low = 0, high = n - 1, sum = 0;
//         while (low < high) {
//             sum = nums[low] + nums[high];
//             if (sum == target) {
//                 ans.push_back(low);
//                 ans.push_back(high);
//                 return ans;

//             } else if (sum > target) {
//                 high--;
//             } else if (sum < target) {
//                 low++;
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (mpp.find(complement) != mpp.end()) {
                ans.push_back(mpp[complement]);
                ans.push_back(i);
                return ans;
            }
            mpp[nums[i]] = i; // to store the index of current element
        }
        return ans;
    }
};
