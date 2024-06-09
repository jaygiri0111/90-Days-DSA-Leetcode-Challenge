/*
//method - 01
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int lsum = 0, rsum = 0;
            // finding left sum of array excluding current index
            for (int j = 0; j < i; j++) {
                lsum = lsum + nums[j];
            }

            // finding right sum of array excluding current index
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

//Time complexity will be O(n^2)
//Outer loop for axceesing each index
//Two inner loop O(n)+O(n)->O(n) for left sum and Right sum
*/

// Method 02
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> lsum(n, 0);
        vector<int> rsum(n, 0);

        for (int i = 1; i < n; i++) {
            lsum[i] = lsum[i - 1] + nums[i - 1];
        }

        for (int i = n - 2; i >= 0; i--) {
            rsum[i] = rsum[i + 1] + nums[i + 1];
        }

        for (int i = 0; i < n; i++) {
            if (lsum[i] == rsum[i]) {
                return i;
            }
        }
        return -1;
    }
};