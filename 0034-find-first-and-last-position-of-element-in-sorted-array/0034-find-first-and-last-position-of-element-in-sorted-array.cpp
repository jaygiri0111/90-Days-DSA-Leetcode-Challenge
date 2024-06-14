class Solution {
public:
    int first_occurence(vector<int>& nums, int target) {
        int low = 0;
        int n = nums.size();
        int high = n - 1;
        int mid = (low + high) / 2;
        int ans = -1;
        while (low <= high) {
            if (nums[mid] == target) {
                ans = mid;
                high = mid - 1;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
            mid = (low + high) / 2;
        }
        return ans;
    }

    int last_occurence(vector<int>& nums, int target) {
        int low = 0;
        int n = nums.size();
        int high = n - 1;
        int mid = (low + high) / 2;
        int ans = -1;
        while (low <= high) {
            if (nums[mid] == target) {
                ans = mid;
                low = mid + 1;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
            mid = (low + high) / 2;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int first = first_occurence(nums, target);
        int last = last_occurence(nums, target);
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};