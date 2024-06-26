class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        int mid = s + (e - s) / 2;
        while (s <= e) {
            // if there is only one element
            if (s == e) {
                return nums[s];
            }
            int currentIndex = nums[mid];
            int leftIndex = -1;
            int rightIndex = -1;
            if(mid-1>=0)
            {
                leftIndex = nums[mid-1];
            }
            if(mid<n)
            {
                rightIndex = nums[mid+1];
            }
            // No single element
            if (currentIndex!= leftIndex && currentIndex != rightIndex)
            {
                   return currentIndex;
            }
            //left side element 
            if(currentIndex == leftIndex)
            {
                int startIndex = mid-1;
                if(startIndex&1)
                {
                    //odd index
                    //move left side
                    e = mid-1;
                }
                else
                {
                    //even Index 
                    //move right side
                    s = mid+1;
                }
            }
              if(currentIndex == rightIndex)
            {
                int startIndex = mid;
                if(startIndex&1)
                {
                    //odd index
                    //move left side
                    e = mid-1;
                }
                else
                {
                    //even Index 
                    //move right side
                    s = mid+1;
                }
            }
            mid = s + (e - s) / 2;
        }
        return -1;
    }
};