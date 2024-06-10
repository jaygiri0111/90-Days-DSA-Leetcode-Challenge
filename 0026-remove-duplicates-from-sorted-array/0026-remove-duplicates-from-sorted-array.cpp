/*
//method 01 --> In place algorithm
//Without extra space
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if (nums.empty())
            return 0;

        int index = 1;
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[i-1]) {

                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};
Time complexity = O(n)
//space complexity = O(1)
*/

// Method 2 --> Two pointer approach
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if (nums.empty())
            return 0;

        int n = nums.size();
        int i = 0; //-->position of unique element
        int j = 1;
        while (j < n) {
            if (nums[i] == nums[j]) {
                j++;
            } else {
                i++;
                nums[i] = nums[j];
                j++;
            }
        }

        return i + 1;
    }
};