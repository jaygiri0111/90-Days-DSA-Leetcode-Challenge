/*class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        // Handle cases with only one element or two elements
        if (n == 1) return 0;
        if (nums[0] > nums[1]) return 0;
        if (nums[n - 1] > nums[n - 2]) return n - 1;

        // Handle general case
        for (int i = 1; i < n - 1; i++) {
            if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1]) {
                return i;
            }
        }

        return -1; // This should not be reached for a valid mountain array
    }
};
*/
// T.C = O(n)
// S.C = O(1)

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = n - 1;
        while (start < end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] > nums[mid + 1]) {
                end = mid;
            } else {
                start = mid + 1;
            }
        }

        return end; // This should not be reached for a valid mountain array
    }
};