class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int lsum = 0, rsum = 0;
            // finding left sum of array
            for (int j = 0; j < i; j++) {
                lsum = lsum + nums[j];
            }

            // finding right sum of array
            for (int j = i + 1; j < n; j++) {
                rsum = rsum + nums[j];
            }

            if (lsum == rsum) {
                return i;
            }
        }
        return -1;
    }
};