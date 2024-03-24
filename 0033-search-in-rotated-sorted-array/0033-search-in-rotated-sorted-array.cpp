// Approach -01(Bruteforce)
//  class Solution {
//  public:
//      int search(vector<int>& nums, int target) {
//          for(int i=0; i<nums.size();i++)
//          {
//              if(nums[i]==target)
//              {
//                  return i;
//              }
//          }
//          return -1;
//      }
//  };

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            //righ sorted
            if (nums[low] > nums[mid]) {
                if (nums[mid] <= target && target <= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
            //left sorted
            else {
                if (nums[low] <= target && target <= nums[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
        }
        return -1;
    }
};