// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans;
//         for (int i = 0; i < n; i++) {

//             if (ans.size() == 0 || ans[0] != nums[i]) {
//                 int count = 0;
//                 for (int j = 0; j < n; j++) {
//                     if (nums[i] == nums[j]) {
//                         count++;
//                     }
//                 }
//                 if (count > (n / 3)) {
//                     ans.push_back(nums[i]);
//                 }
//             }
//             if (ans.size() == 2)
//                 break;
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        vector<int> ans;
        int mini = ceil(n/3);
        for (int i = 0; i < n; i++) {
          mpp[nums[i]]++;
        }
        for(auto it : mpp)
        {
            if(it.second>(n/3))
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};