class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int>ans;
        for (int i = 0; i < nums.size(); i++) {
            int required_num = target - nums[i];
            if(map.find(required_num)!=map.end())
            {
                ans.push_back(map[required_num]);
                ans.push_back(i);
                return ans;
            }
            else
            {
                map[nums[i]]=i;
            }
        }
        return ans;

    }
};