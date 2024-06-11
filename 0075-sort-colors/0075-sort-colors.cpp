/*
// method - 1
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int zero_count = 0;
        int one_count = 0;
        int two_count = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                zero_count++;
            } else if (nums[i] == 1) {
                one_count++;
            } else {
                two_count++;
            }
        }
        for (int i = 0; i < zero_count; i++) {
            nums[i] = 0;
        }
        for (int i = zero_count; i < zero_count + one_count; i++) {
            nums[i] = 1;
        }
        for (int i = zero_count + one_count; i < n; i++) {
            nums[i] = 2;
        }
    }
};
*/

// method - 02 --> Dutch Flag Algo
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0, mid = 0, high = n - 1;
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else if (nums[mid] == 2) {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};